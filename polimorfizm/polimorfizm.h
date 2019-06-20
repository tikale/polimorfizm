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
	void liczba_v(int a) override; //funkcja zacieraj¹ca funkcje liczba_v z klasy Pierwsza //s³owo override jest dla kompilatora w celu weryfikacji (nie jest wymagane)
	void liczba(int a); //funkcja zas³aniaj¹ca funkcje liczba z klasy Pierwsza
};

// Funkcje o tych samych nazwach prze³adowuj¹ siê.
int sum(int, int);
float sum(float, float);

void wait();

#endif