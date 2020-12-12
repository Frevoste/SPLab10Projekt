#include <iostream>
#include "dodaj.h"
#include "odjac.h"
#include "mnoz.h"
#include "dziel.h"
using namespace std;
int main()
{
double pierwsza,druga;
cout << "Podaj pierwsza liczbe";
cin >> pierwsza;
cout << "Podaj druga liczbe";
cin >> druga;
cout << "Co chcesz zrobic? \n1.Dodac \n2.Odjac \n3.Mnozyc \n4.Dzielic";
int menu;
cin >> menu;
switch (menu)
{
case 1:
	cout << dodaj(pierwsza,druga);
case 2:
	cout << odjac(pierwsza,druga);
case 3:
	cout << mnoz(pierwsza,druga);
case 4:
	cout << dziel(pierwsza,druga);
}



return 0;
}
