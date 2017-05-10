#pragma once
#include <string>

using namespace std;

class Money
{
private:
	int hryvna;
	int kop;
public:
	string ShowMoney();
	Money();
	Money(int hryvnas, int kops);
	Money(int kops);
	Money AddMoney(Money m);
	Money SubMoney(Money m);
};