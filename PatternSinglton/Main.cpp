// Main.cpp : Defines the entry point for the console application.

#include "Singlton.h"

int main()
{
	setlocale(0, "");
	{
		Singlton sin1;
		Singlton sin2;
		Singlton sin3;

		sin1.Show();
		sin2.Show();
		sin3.Show();

		sin1->Show();
		sin2->Show();
		sin3->Show();

		sin1->Get();
		sin2->Get();
		sin3->Get();

		sin1->Function();
		sin2->Function();
		sin3->Function();

		std::cout << sin1->Mult(4, 5) << std::endl;
		std::cout << sin2->Mult(6, 7) << std::endl;
		std::cout << sin3->Mult(7, 8) << std::endl;
	}

	system("pause");
	return 0;
}

