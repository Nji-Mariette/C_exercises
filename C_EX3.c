#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(){
    
    int length = 6;
    int sample_fd;
    int kan_fd;
    char buf[10];
    int l_read;
    ssize_rite;
    
    sample_fd = open("marie.txt" ,O_RDONLY);
    printf("%d \n",sample_fd);
    
    kan_fd = open("kanye.txt" ,O_WRONLY);
    printf("%d \n", kan_fd);

   l_read = read(sample_fd,buf,length)
    printf("%s \n",buf)
    
    if ((sample_fd ,F_ok) !=-1) {
        printf("file exists")
    } else {
        printf("file does not exists")
    }
    
    if ((kan_fd,F_ok) !=-1) {
        rite = write(kan_fd, buf,length)
    } else {
        if ((kan_fd,F_ok) !=0) {
            kan_fd = open("kanye.txt", O_CREATE);
            rite = write(kan_fd,buf.length);
        }
    }
    
}
