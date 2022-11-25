KERNEL_SRC=/lib/modules/$(shell uname -r)/build

obj-m := led_module.o

go:
	make -C $(KERNEL_SRC) M=$(PWD) modules

clean:
	rm *.mod.* *.order *.symvers *.mod *.o
