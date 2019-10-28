/*模仿的第一个套接字程序，客户端发送字母a,在服务端显示结果*/
#include<stdio.h>

#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
int main()
{
        int sock=0,varread;
        struct sockaddr_in address;
        char buffer[1024]={0};
        char hello = 'a';
        sock=socket(AF_INET,SOCK_STREAM,0);
        address.sin_family=AF_INET;
        address.sin_port=htons(8080);
        inet_pton(AF_INET,"10.20.218.63",&address.sin_addr.s_addr);
        connect(sock,(struct sockaddr*)&address,sizeof(address));
        send(sock,&hello,1,0);
        printf("a已经提价");
        
}
