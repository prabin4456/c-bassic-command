$ pwd
$ /data/data/com.termux/files/home
$ nano hello.c
#include <stdio.h>
int main()
{
	printf("Hello World!");
}
$ gcc hello.c -o hello
$ ls
hello hello.c
$ ./hello