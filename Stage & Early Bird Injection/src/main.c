//For this week's challenge, we'll explore creating a stager that fetches shellcode from a remote location and then uses the early bird injection technique to inject the payload into a process.
//This challenge will have overlapping concepts that were shown in "Module 30: Payload Staging - Web Server" and "Module 40: Early Bird APC Injection".
//Bonus: The code for this challenge fetches the payload via HTTP.Modify the code to retrieve the payload via HTTPS instead.

#include <Windows.h>
#include <wininet.h> 
#include <stdio.h>
#include <WinSock2.h>
#include <stdlib.h>

#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "ws2_32.lib")

// custom wrapper function(of CreateProcess) to create a suspned process for APC Inject
BOOL CreateSuspendedProcess2(LPCSTR lpProcessName) { 

}


// custom wrapper function to download another payload from our py server

BOOL DownloadPayload(LPCWSTR SeverUrl) {
	// 1. InternetOpenW() - Initialize WinINet
	// 2. InternetOpenUrlW() - Open connection to URL
	// 3. InternetReadFile() - Read the data
	// 4. InternetCloseHandle() - Cleanup
	// 5. InternetSetOptionW() - Close connections
}

BOOL IsServerRunning(const* hostadress, int port) {
	WSADATA wsaData;           // Winsock data structure
	SOCKET sock;               // Socket handle (like a file handle)
	struct sockaddr_in server; // Server address structure
	BOOL result = FALSE;       // Return value

	//Winsock
	if (WSAStartup(MAKEWORD(2, 2), &wsaData != 0)) {
		return FALSE;
	}

	//Socket
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET) {
		WSACleanup();
		return FALSE;
	}
}

void menu() {
	printf("==============================================\n");
	printf("   Early Bird APC Injection - Demo Tool\n");
	printf("==============================================\n");
	printf("[!] Please only test on systems you own!\n");

}

int main() {
	menu();
	return 0;
}