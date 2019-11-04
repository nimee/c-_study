#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
void str_cli(FILE *fp,int sockfd);
int main(int argc,char **argv)
{
        int sockfd;
        struct sockaddr_in servaddr;
        if(argc != 2)
                printf("请输入目的地址");

        sockfd=socket(AF_INET,SOCK_STREAM,0);
        servaddr.sin_family=AF_INET;
        servaddr.sin_port=htons(9975);
        inet_pton(AF_INET,argv[1],&servaddr.sin_addr.s_addr);
       // servaddr.sin_addr.s_addr=inet_htonl(argv[1]);
        connect(sockfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
       // str_cli(stdin,sockfd);
       char hello='h';
       write(sockfd,&hello,1);
       char buffer[1000];
       read(sockfd,buffer,1);
       printf("%s\n",buffer);
       close(sockfd);
        
}
void str_cli(FILE *fp,int sockfd)
{
        char sendline[1000],recvline[1000];
        while(fgets(sendline,1000,fp)!=NULL)
        {
         write(sockfd,sendline,strlen(sendline)) ;
         if(read(sockfd,recvline,sizeof(recvline)==0))
                 printf("str_cli:服务器停止");
        }
              fputs(recvline,stdout); 


        
}
