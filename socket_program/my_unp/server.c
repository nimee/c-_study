/*第一个套接字实验,客户端能够简单地发送一个a到服务端*/
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>

int main()
{
        int server_fd, valread;
        int new_socket;
        char buffer[1024]={0};
        struct sockaddr_in address;
        int  addrlen=sizeof(address);
        address.sin_family=AF_INET;
        address.sin_addr.s_addr=INADDR_ANY;
        address.sin_port=htons(8080);

        server_fd=socket(AF_INET,SOCK_STREAM,0);
        bind(server_fd,(struct sockaddr *)&address,sizeof(address));
        listen(server_fd,5);
        new_socket= accept(server_fd,(struct sockaddr *)NULL,NULL);
        valread=read(new_socket,buffer,1024); 
        printf("%s\n",buffer);
        return 0;


}
