<<<<<<< HEAD
#include <stdio.h>

#define F1 14
int g1 =0;

extern void incr();

int main(){
    printf("f1 is %d\n", F1);
    incr();
    printf("g1 is %d\n", g1);
    return 0;
=======
#include <stdio.h>
#define ID 12

extern int break1(int a);
int status;
static int flag;
const int k = 123;

int main() {
    printf("hello world %d\n", ID);
    status = 120;
    flag = 200;
    break1(ID*k);
    break1(ID*k);
    break1(ID*k);
    return 0;
>>>>>>> dffb2f72649c40e58684cc4fd787e4719b4c16c1
}