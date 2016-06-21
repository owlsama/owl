#include <iostream>
using namespace std;
int main()
{
	int i,j,k;
	int total;
	for (i=1;i<=9;i++)
	for (j=0;j<=9;j++)
	for (k=0;k<=9;k++)
	{
		total=i*100+j*10+k;
		if(total==(i*i*i+j*j*j+k*k*k))
		cout << total << "=" << i << "^3+" << j << "^3+" << k << "^3" <<endl;
	}
}
