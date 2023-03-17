#include "klasy.h"

#include <iostream>

void B::metodaB()
{
	std::cout << "Uruchomiono metode B\n";
	aPublic = 1;
	aProtected = 2;
	//aPrivate = 3;
	bPublic = 4;
	bProtected = 5;
	bPrivate = 6;
	std::cout << "Zakonczono metode B\n";
}

void C::metodaC()
{
	std::cout << "Uruchomiono metode C\n";
	aPublic = 1;
	aProtected = 2;
	aPrivate = 3;
	bPublic = 4;
	bProtected = 5;
	bPrivate = 6;
	cPublic = 7;
	cProtected = 8;
	cPrivate = 9;
	metodaB();
	std::cout << "Zakonczono metode C\n";
}