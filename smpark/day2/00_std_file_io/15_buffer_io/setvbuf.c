#include <stdio.h>

int main( void )
{
    char buf[1024];
    FILE *fp1, *fp2;

    fp1 = fopen("data1", "a");
    fp2 = fopen("data2", "w");

    if( setvbuf(fp1, buf, _IOFBF, sizeof( buf ) ) != 0 )
        printf("First stream: wrong buffer\n" );
    else
        printf("First stream: using %ld byte size buffer\n", 
               fp1->_IO_buf_end - fp1->_IO_buf_base);
    if( setvbuf(fp2, NULL, _IONBF, 0 ) != 0 )
        printf("First stream: wrong buffer\n" );
    else
        printf("Second stream: none buffer \n");
}
