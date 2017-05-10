#include <iostream>
#include <conio.h>
#include "Money.h"

using namespace std;

int main()
{
	Money m1(10, 50);
	Money m2(1, 60);
	Money m3(10);
	Money m4(120);
	Money m5;
	Money m6 = m1.AddMoney(m2);
	m1.SubMoney(m2);
	Money m7 = m1.SubMoney(m2);
	cout << m1.ShowMoney() << endl << m2.ShowMoney() << endl << m3.ShowMoney() << endl << m4.ShowMoney() << endl << m5.ShowMoney() << endl << m6.ShowMoney() << endl << m7.ShowMoney() << endl;
	_getch();
	return 0;
}