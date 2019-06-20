#include<iostream>
#include "polimorfizm.h"
using namespace std;

int main()
{
	int a = 2;
	int b = 4;

	float a1 = 3.4f;
	float b1 = 5.7f;

	cout << sum(a, b); // dla int bêdzie to funkcja int
	cout << "\n";
	cout << sum(a1, b1); // dla float bedzie to funkcja float
	cout << "\n";

	Pierwsza jedyneczka;
	Druga dwujeczka;

	Pierwsza *wsk;

	wsk = &jedyneczka;
	wsk->nazwa();

	wsk = &dwujeczka; //wsk jest typu klasa Pierwsza, bêdzie pokazywa³ na obiekt klasy Druga.
	wsk->nazwa(); //poniewa¿ funkcja nazwa jest wirtualna to kompilator wykryje ¿e ma u¿ywaæ funkcji klasy Druga.

	dwujeczka.liczba(4);
	dwujeczka.liczba_v(5);
	dwujeczka.Pierwsza::liczba(12);
	dwujeczka.Pierwsza::liczba_v(9);

	wait();

	return 0;
}

void wait()
{
	do {
		cout << '\n' << "Press the Enter key to continue.";
	} while (cin.get() != '\n');
}

// Funkcje o tych samych nazwach prze³adowuj¹ siê.
int sum(int a, int b)
{
	return a + b;
}

float sum(float a, float b)
{
	return a + b;
}

void Pierwsza :: liczba(int a)
{
	cout << "\nPierwsza liczba ";
	cout << a;
	cout << "\n";
}

void Pierwsza::liczba_v(int a)
{
	cout << "\nPierwsza liczba_v ";
	cout << a;
	cout << "\n";
}

void Pierwsza::nazwa()
{
	cout << "\nPierwsza\n";
}

void Druga::nazwa()
{
	cout << "\nDruga\n";
}

void Druga::liczba(int a)
{
	cout << "\nDruga liczba ";
	cout << a;
	cout << "\n";
}

void Druga::liczba_v(int a)
{
	cout << "\nDruga liczba_v ";
	cout << a;
	cout << "\n";
}