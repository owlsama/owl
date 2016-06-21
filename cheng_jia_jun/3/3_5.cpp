#include <iostream>
using namespace std;
int main ()
{
	char ch;
	int i=0;
	for (cin>>ch; ch!='#'; cin>>ch)
	{
		if (ch=='(')
		i++;
		else if (ch == ')')
		i--;
	}
	if (i==0)
	cout << "match!";
	else if (i>0)
	cout << "left is more!";
	else if (i<0)
	cout << "right is more!";
}
