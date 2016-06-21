#include <iostream>
using namespace std;
int main ()
{
	int a,b,t;
	cout << "please input a: ";
	cin >> a;
	cout << "please input b: ";
	cin >> b;
	if (b>a)
	{
		t=a;
		a=b;
		b=t;
	}
	while (a%b!=0)
	b=a%b;
	cout << "the number is " << b;
}
