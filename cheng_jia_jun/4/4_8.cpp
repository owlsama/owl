#include <iostream>
using namespace std;

int main()
{
	double temperature(double f);
	int digit(int i);
	double PRICE(double weight,double distance);
	int common_divisor(int a,int b);
	
	double weight,distance,price;
    double f,t;
	int i,j,a,b,c;
	
	t=temperature(41);
	j=digit(12345);
	price=PRICE(60,2130);
	c=common_divisor(30,20);
	cout << t << " 5" <<endl;
	cout << j << " 5" << endl;
	cout << price << " 16" <<endl;
	cout << c << " 10" <<endl;
}

double temperature(double f)
{
	double c;
	c=(5.0/9.0)*(f-32.0);
	return c;
}

int digit (int i)
{
	int n=0;
	while (i!=0)
	{
		i=i/10;
		n++;
	}
	return n;
}

double PRICE(double weight,double distance=0)
{
	double price;
	if (weight >60)
	price=15+2*((int)distance/1000);
	else if (weight >45)
	price=14+((int)distance/1000);
	else price=12;
	return price;
}

int common_divisor(int a,int b)
{
	int temp;
	if (a<b);
	{
		temp=b;
		b=a;
		a=temp;
	}
	while(a%b!=0)
	{   temp=a%b;
	    a=b;
	    b=temp;
	}
	return b;
}
