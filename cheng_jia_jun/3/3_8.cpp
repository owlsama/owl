#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double delta=1.0e-8,pi=0,t=1;
	int i=0;
	while (t>delta)
	{
		t=1.0/(2*i+1);
		if(i%2==0)
		pi=pi+t;
		else if (i%2==1)
		pi=pi-t;
		i++;
	}
	pi=pi*4;
	cout << setprecision(8) << pi << endl;
}
