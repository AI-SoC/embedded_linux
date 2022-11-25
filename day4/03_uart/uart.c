#include <stdio.h>
#include <string.h>  
#include <unistd.h> 
#include <fcntl.h> 
#include <termios.h>

int main()
{
    int uart0_filestream = -1;
    unsigned char tx_buf[256]; 
    unsigned char rx_buf[256];

    uart0_filestream = open("/dev/ttyAMA1", O_RDWR | O_NOCTTY | O_NDELAY);

    //Open in non blocking read/write mode 
    if (uart0_filestream == -1) 
    {
        printf("Error - Unable to open UART. Ensure it is not in use by another application\n"); 
    }

    struct termios options; 
    tcgetattr(uart0_filestream, &options); 
    options.c_cflag = B19200 | CS8 | CLOCAL | CREAD; //<Set baud rate 
    options.c_iflag = IGNPAR; 
    options.c_oflag = 0; 
    options.c_lflag = 0; 
    tcflush(uart0_filestream, TCIFLUSH); 
    tcsetattr(uart0_filestream, TCSANOW,&options);

    strcpy(tx_buf, "COMMUNICATE START\n"); 
    int count = write(uart0_filestream, &tx_buf[0], strlen(tx_buf));
    if (count<0)
    {   
        printf("UART TX error\n");
    }

    while(uart0_filestream != -1) 
    {
        int rx_buf_len = read(uart0_filestream, (void*)rx_buf, 255);
        while(rx_buf_len <= 0)
        {
	    sleep(1);
            rx_buf_len = read(uart0_filestream, (void*)rx_buf, 255);
        }
        
        rx_buf[rx_buf_len] = '\0';
        printf("%d bytes read : %s\n", rx_buf_len, rx_buf);
    }

    close(uart0_filestream);
    return 0;
}
