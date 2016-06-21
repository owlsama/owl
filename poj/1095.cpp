#include<iostream>
using namespace std;
long long c[30]={1};
void Init(){
	for(int i=1;i<=25;i++)
	c[i]=c[i-1]*(4*i-2)/(i+1);
}

void solve(int m,long long n)
{
	if(m==1)
	{
		cout<<"X";
		return;
	}
	
	int i;
	long long sum=0;
	for(i=0;sum<n;i++)
	{
		sum+=c[i]*c[m-i-1];
	}
	i-=1;
	int left=i;
	int right=m-left-1;
	long long new_n=n-(sum-c[left]*c[right]);
	if(left>0)
	{
		cout<<"(";
		solve(left,(new_n-1)/c[right]+1);
		cout<<")";
	}
	cout<<"X";
	if(right>0)
	{
		cout<<"(";
		solve(right,(new_n-1)%c[right]+1);
		cout<<")";
	}
}

int main()
{
	int i;
	long long sum,n;
	Init();
	while(cin>>n)
	{
		if(n==0) break;
		sum=0;
		for(i=1;sum<n;i++)
		{
			sum+=c[i];
		}
		i-=1;
		solve(i,n-(sum-c[i]));
		cout<<endl;
	}
}
