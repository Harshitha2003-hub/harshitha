#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define PORT 4444
void main(){
int clientSocket;
struct sockaddr_in serverAddr;
char buffer[1024];
clientSocket = socket(PF_INET, SOCK TREAM, 0);
printf("[+]Client Socket Created Sucessfully.\n");
memset(&serverAddr, '\0', sizeofserverAddr));
serverAddr.sin_family = AFANET;
serverAddr.sin_port = htos(PORT);
serverAddr.sin_addr.s_addr=inet_addr("127.0.0.1");
connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
printf("[+] connected to server\n");
printf(clientSocket,buffer, 1024, 0);
print("[+]Data Recv: %s\n", buffer);
printf("[+]Closing the connection.\n");
} 


