#include <stdio.h>

int main() {
    printf("Running...\n");
	int a = 0x12345678;
	int *ap = &a;
	printf("a is 0x%8x at %p\n", a, ap);

	unsigned char *bp = (unsigned char*)ap;
	printf("a is 0x%8x at %p (%p)\n", a, ap, bp);
	


    return 0;
}
