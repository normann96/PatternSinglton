#include "Singlton.h"

#define SIZE 20

int Singlton::m_nCount;
Client * Singlton::mpClient;

Singlton::Singlton()
{
	if (++m_nCount == 1)
	{
		mpClient = new Client;
	}
	std::cout << "Constructor Singlton " << this << std::endl;
}


Singlton::~Singlton()
{
	if (--m_nCount == 0)
	{
		delete mpClient;
		std::cout << "Destructor Singlton " << this << std::endl;
	}
}

void Singlton::Show()
{
	std::cout << "From Singlton Show: " << this << std::endl;
}

Client * Singlton::operator->()
{
	return mpClient;
}