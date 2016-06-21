#include<iostream>
using namespace std;
int main()
{
	double a,b=0.0;
	int i;
	for(i=1;i<=12;i++)
	{
		cin>>a;
		b=b+a;
	}
	cout<<"$"<<b/12.0;
}
