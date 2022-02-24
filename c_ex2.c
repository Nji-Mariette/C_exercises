#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(){

    int okay_fd;
    char buf[70];
    int l_read;
    int kan_fd;

    okay_fd = open("marie.txt",O_RDWR);
    printf("%d \n",okay_fd);
    kan_fd = open("kanye.txt",O_WRONLY);
    printf("%d \n",kan_fd);

    
    
    if ((l_read=read(okay_fd,buf,(1-21)))) {
        
            printf("%s \n",buf);
            write(kan_fd,buf,l_read);
        
    } else {
        (l_read=read(okay_fd,buf,(22-40))) {
            printf("%s \n",buf);
            write(kan_fd,buf,l_read);
    }
        
        

}
