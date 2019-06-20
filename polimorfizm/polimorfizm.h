#pragma once

#ifndef _PoliMor
#define _PoliMor

class Pierwsza
{
public:
	virtual void nazwa();

	virtual void liczba_v(int a);
	void liczba(int a);
};

class Druga : public Pierwsza
{
public:
	void nazwa();
	void liczba_v(int a) override; //funkcja zacieraj�ca funkcje liczba_v z klasy Pierwsza //s�owo override jest dla kompilatora w celu weryfikacji (nie jest wymagane)
	void liczba(int a); //funkcja zas�aniaj�ca funkcje liczba z klasy Pierwsza
};

// Funkcje o tych samych nazwach prze�adowuj� si�.
int sum(int, int);
float sum(float, float);

void wait();

#endif