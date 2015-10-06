#include "Client.h"

#define SIZE 20

Client * CreateClient();
Client * Client::pClient;

Client::Client() 
{
	m_pClient = new int[SIZE];
	std::cout << "Constructor Client " << this << std::endl;
}


Client::~Client()
{
	delete [] m_pClient;
	std::cout << "Destructor Client " << this << std::endl;
}

void Client::Show()
{
	std::cout << "From class Client Show: " << this << std::endl;
}

void Client::Function()
{
	std::cout << "25 x 15 = " << 25 * 15 << std::endl; 
}

int Client::Mult(int a, int b)
{
	return a * b;
}

char * Client::Get()
{
	char *Str = "Simple text";
	std::cout << Str << std::endl;
	return Str;
}

Client * Client::CreateClient()
{
	return pClient;
}
