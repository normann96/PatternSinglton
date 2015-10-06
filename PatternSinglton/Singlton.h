#ifndef Singlton_h__
#define Singlton_h__

#include <iostream>
#include "Client.h"

class Singlton
{
private:
	static int m_nCount;
	static int * m_pArr;
	static Client * mpClient;
public:
	Singlton();
	~Singlton();
	void Show();

	Client * operator->(); 
};

#endif // Singlton_h__
