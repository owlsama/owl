#include <iostream>
using namespace std;
int main()
{
    int i,j=0;
 	cout << "please input the number:" ;
 	cin >> i ;
 	if(i<0)
 	cout << "number is less than zero!" ;
 	while (i>0)
 	{
 		i=i/10;
 		j++;
	}
	 cout << j;
}
