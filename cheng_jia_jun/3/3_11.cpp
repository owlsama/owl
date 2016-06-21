#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for (i=0;i<10;i++)
	{
		if (i!=0)
		cout<<i;
		cout<<"\t";
	    for (j=1;j<10;j++)
	    {
	    	if(i*j!=0)
	    	cout<<i*j<<"\t";
	    	else
	    	cout<<j<<"\t";
	    }
	    	cout<<endl;
    }
}
