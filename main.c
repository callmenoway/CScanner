#include<stdio.h>    
#include<winsock2.h>
#include <stdbool.h>
#pragma comment(lib, "ws2_32.lib"); //per linkare la libreria del websocket 

bool Scan(char ip[32], int port) {
	WSADATA version;
	SOCKADDR_IN addr;
	SOCKET mySocket;
    
	int iResult = WSAStartup(MAKEWORD(2,2), &version);
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr(ip);
	addr.sin_port = htons(port);

	mySocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (WSAConnect(mySocket, (SOCKADDR*)&addr, sizeof(addr), NULL, NULL, NULL, NULL) == SOCKET_ERROR){
        closesocket(mySocket);
        WSACleanup();
        return false; //connessione fallita quindi porta chiusa
    }
    else
    {
        return true; //porta aperta, connessione riuscita
    }
} 

int main(int argc, char *argv[]) {
    if (argc == 3) {
        int port = atoi(argv[2]);
        if (Scan(argv[1], port)) return printf("true");
        printf("false");
    }
    else printf("Usage: scan.exe <ip> <port>");
    return 0;
}
