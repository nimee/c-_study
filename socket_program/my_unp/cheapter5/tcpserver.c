/*书本第五章内容*/
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<errno.h>
void str_echo(int sockfd);
int main(int argc,char **argv)  
{
    int listenfd,connfd;
    pid_t childpid;
    socklen_t clilen;
    struct sockaddr_in cliaddr,seraddr;
        listenfd=socket(AF_INET,SOCK_STREAM,0);
        seraddr.sin_family  = AF_INET;
        seraddr.sin_port=htons(9975);
        seraddr.sin_addr.s_addr=htonl(INADDR_ANY);
        bind(listenfd,(struct sockaddr *)&seraddr,sizeof(seraddr)) ;
        listen(listenfd,5);
        for( ; ; )
        {
                clilen=sizeof(cliaddr);
                connfd=accept(listenfd,(struct sockaddr *)NULL,NULL);
                if((childpid=fork())==0)
                {
                    close(listenfd);                    
                    str_echo(connfd);
                    exit(0);
                }
                close(connfd);
        }
}
void str_echo(int sockfd)
{
        ssize_t n;        
        char buf[1000];
again:
        while((n==read(sockfd,buf,1000))>0)
                write(sockfd,buf,n);
        if (n<0 && errno == EINTR)
                goto again;
        else if(n<0)
                printf("str_echo:read error");
}

