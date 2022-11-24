#include <stdio.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>

int main()
{ 
	printf("My user ID ID : %d(%s) \n", getuid(), getpwuid(getuid())->pw_name);
	printf("My effective user ID : %d(%s) \n", geteuid(), getpwuid(geteuid())->pw_name);
	printf("My group ID : %d(%s) \n", getgid(), getgrgid(getgid())->gr_name);
	printf("My effective group ID : %d(%s) \n", getegid(), getgrgid(getegid())->gr_name);
}
