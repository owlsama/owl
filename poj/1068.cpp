#include<iostream>
using namespace std;
int main()
{
	int s[1000],p[20],w[20];
	int i,j,k,t,n,l;
	cin>>t;
	while(t--)
	{
		k=0;
		l=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>p[i];
			for(j=0;j<p[i]-k;j++)
			s[l++]=0;
			s[l++]=1;
			k=p[i];
		}
		for(i=0;i<l;i++)
		{
			if(s[i]==1)
			{
				int count=2;
				j=i;
				while(j--)
				{
					if(s[j]==0)
					{
						s[i]=s[j]='F';
						break;
					}
					else
					count++;
				}
				cout<<count/2<<' ';
			}
		}
		cout<<endl;
	}
}
