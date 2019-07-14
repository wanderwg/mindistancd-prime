#include <iostream>
#include <stdio.h>
using namespace std;

bool Isprime(int num)
{
	if (num == 1 || num == 0)
		return false;
	for (int i = 2; i < num/2; ++i)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int EvenNum, n1, n2, pri1, pri2, tmp = 0, ret = 0;
	cin >> EvenNum;
	for (int i = 2; i < EvenNum/2; ++i)
	{
		n1 = i;
		n2 = EvenNum - i;
		if (Isprime(n1) && Isprime(n2))
		{
			tmp = n2 - n1;
			pri1 = n1;
			pri2 = n2;
		}
		if (tmp < ret)
		{
			ret = tmp;
			pri1 = n1;
			pri2 = n2;
		}
	}
	cout << pri1 << " " << pri2 << endl;
	return 0;
}