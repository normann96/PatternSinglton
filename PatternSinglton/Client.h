#ifndef Client_h__
#define Client_h__

#include <iostream>

class Client
{
private:
	friend class Singlton;

	Client();
	~Client();

	int * m_pClient;
	static Client *pClient;

public:
	void Show();
	void Function();
	int Mult(int a, int b);
	char * Get();

	static Client * CreateClient();
};

#endif // Client_h__
