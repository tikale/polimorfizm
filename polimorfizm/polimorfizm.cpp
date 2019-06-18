#include<iostream>
#include "polimorfizm.h"
using namespace std;

int main()
{
	int a = 2;
	int b = 4;

	float a1 = 3.4f;
	float b1 = 5.7f;

	cout << sum(a, b);
	cout << "\n";
	cout << sum(a1, b1);
	cout << "\n";

	wait();

	return 0;
}

void wait()
{
	do {
		cout << '\n' << "Press the Enter key to continue.";
	} while (cin.get() != '\n');
}


int sum(int a, int b)
{
	return a + b;
}

float sum(float a, float b)
{
	return a + b;
}
