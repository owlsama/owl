#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	double vs,r,c,w;
	int n;
	cin>>vs>>r>>c>>n;
	for(;n>0;n--)
	{
		cin>>w;
		printf("%.3f\n",r*c*w*vs*sqrt(1/(1+r*r*c*c*w*w)));
	}
}
