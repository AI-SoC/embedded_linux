#include <linux/module.h>
#include <linux/cdev.h>
#include <linux/uaccess.h>
#include <linux/fs.h>
#include <linux/io.h>

#define GPIO_BASE	0xfe200000
#define GPIO_SIZE	256
#define GPIO_SET(g)	(*(gpio+7)=1<<g)
#define GPIO_CLR(g)	(*(gpio+10)=1<<g)
#define GPIO_GET(g)	(*(gpio+13)&(1<<g))
#define GPIO_IN(g)	(*(gpio+((g)/10)) &=~(7<<(((g)%10)*3)))
#define GPIO_OUT(g)	(*(gpio+((g)/10)) |=(1<<(((g)%10)*3)))

#define GPIO_MAJOR	245
#define GPIO_MINOR	0
#define GPIO_DEVICE 	"ledtest"
#define GPIO_NUM	24

static int gpio_open(struct inode*, struct file*);
static int gpio_release(struct inode*, struct file*);
static ssize_t gpio_read(struct file*, char*, size_t, loff_t*);
static ssize_t gpio_write(struct file*, const char*, size_t, loff_t*);

volatile unsigned *gpio;
static char msg[BLOCK_SIZE] = {0};
struct cdev gpio_cdev;
static struct file_operations gpio_fop ={
	.owner = THIS_MODULE,
	.open=gpio_open, 
	.release=gpio_release,
	.read=gpio_read,
	.write=gpio_write, 
};

int start_module(void){
	unsigned int cnt=1;
	static void* map;
	int add;
	dev_t devno;
	
	printk(KERN_INFO "START MODULE\n");
	devno=MKDEV(GPIO_MAJOR, GPIO_MINOR);
	register_chrdev_region(devno, 1, GPIO_DEVICE);
	cdev_init(&gpio_cdev, &gpio_fop);
	gpio_cdev.owner = THIS_MODULE;
	
	add=cdev_add(&gpio_cdev, devno, cnt);
	map=ioremap(GPIO_BASE, GPIO_SIZE);
	gpio=(volatile unsigned int*)map;
	
	GPIO_IN(GPIO_NUM);
	GPIO_OUT(GPIO_NUM);
	
	return 0;
}

void end_module(void){
	dev_t devno = MKDEV(GPIO_MAJOR,GPIO_MINOR);
	unregister_chrdev_region(devno, 1);	
	cdev_del(&gpio_cdev);
	
	if(gpio)	
		iounmap(gpio);
	printk(KERN_INFO "END MODULE\n");
}
static int gpio_open(struct inode *inode, struct file *file){
	try_module_get(THIS_MODULE);
	printk("OPEN - gpio device\n");
	return 0;
}

static int gpio_release(struct inode* inode, struct file* file){
	module_put(THIS_MODULE);
	printk("CLOSE - gpio device\n");
	return 0;
}

static ssize_t gpio_read(struct file* file, char* buf, size_t len, loff_t* off){
	int cnt;
	cnt = copy_to_user(buf, msg, strlen(msg)+1);
	printk("GPIO device READ: %s \n", msg);
	return cnt;
}

static ssize_t gpio_write(struct file* file, const char* buf, size_t len, loff_t* off){
	short cnt;
	memset(msg, 0, BLOCK_SIZE);
	cnt = copy_from_user(msg, buf, len);
	(!strcmp(msg, "0")) ? GPIO_CLR(GPIO_NUM):GPIO_SET(GPIO_NUM);
	printk("gpio device WRITE: %s \n", msg);
	return cnt;
}

MODULE_LICENSE("GPL");
module_init(start_module);
module_exit(end_module);


