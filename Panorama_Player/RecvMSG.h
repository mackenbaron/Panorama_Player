#pragma once

// RecvMSG 命令目标

class RecvMSG : public CSocket
{
public:
	RecvMSG();
	virtual ~RecvMSG();
	SOCKET Recvsock;
	SOCKADDR_IN  addrSrc;

	int InitSocket(int Src_port);
	CString RecvMsg();
	int DeInitSocket();
};


