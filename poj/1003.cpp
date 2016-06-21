#include <iostream>
using namespace std;
int main()
{
	int n;
	double a,a_left;
	while(cin>>a)
	{
	if(a-0.0>1e-6)
	{
		a_left=a;
		for(n=2;a_left>1e-6;n++) a_left=a_left-1/double(n);
		cout<<n-2<<" card(s)\n";
	}
	else break;
    }
}
