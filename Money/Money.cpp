#include <sstream>
#include "Money.h"

string Money::ShowMoney()
{
	ostringstream s;
	s << hryvna << "," << kop;
	return s.str();
}

Money::Money()
{
	hryvna = 0;kop= 0;
}

Money::Money(int hryvnas, int kops)
{
	hryvna = hryvnas+kops/100;
	kop = kops%100;
}

Money::Money(int kops)
{
	hryvna = kops / 100;kop= kops % 100;
}

Money Money::AddMoney(Money m)
{
	hryvna += m.hryvna + (m.kop + kop) / 100;
	kop = (kop + m.kop) % 100;
	return Money(hryvna,kop);
}

Money Money::SubMoney(Money m)
{
	int kops = hryvna * 100 + kop;
	int mkops = m.hryvna * 100 + m.kop;
	hryvna = (kops - mkops) / 100;
	kop = (kops - mkops) % 100;
	return Money(hryvna,kop);
}
