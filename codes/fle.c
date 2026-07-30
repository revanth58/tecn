#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){
	int fd = open("attendance.txt", O_RDONLY);
	char buf[10];
	buf[9]='\0';
	int r = read(fd,buf,9);printf("%d %s\n", r,buf);
	r = read(fd,buf,9);printf("%d %s\n", r,buf);
	r = read(fd,buf,9);printf("%d %s\n", r,buf);
	r = read(fd,buf,9);printf("%d %s\n", r,buf);
	r = read(fd,buf,9);printf("%d %s\n", r,buf);
	close(fd);

	int fd1 = open("newfile.txt",O_WRONLY|O_CREAT,0644);
	char buf2[] = "sdvkbdfjsvrtgsrbtstrbssbvhysubtvsyubtrvrstvrs";
	int w = write(fd1, buf2, strlen(buf2));
	printf("%ld %d\n", strlen(buf2), w);
	close(fd1);
}