/*练习 fork函数的使用*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
        pid_t pid;
        char *message;
        int n;
        pid=fork();
        if(pid<0)
        {
                perror("fork failed");
                exit(1);
        }
        if (pid==0)
        {
                message="this is the child\n";
                n=6;
//                puts(message);
        } else {
                message="this is the parent\n";
                n=3;
        }
        for( ; n>0;n-- )
        {
                printf(message);
                sleep(1);
        }
        return 0;
}
