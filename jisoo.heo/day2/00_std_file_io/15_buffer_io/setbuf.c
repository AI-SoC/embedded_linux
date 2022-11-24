#include <stdio.h>  

int main()
{
  printf("Hello, "); sleep(1);
  printf("My name is Daejin!"); sleep(1);
  printf(" \n"); sleep(1);

  setbuf(stdout, NULL);
  printf("Everyone, "); sleep(1);
  printf("Good Morning"); sleep(1);
  printf(" ^^"); sleep(1);
  printf(" \n"); sleep(1);
}
