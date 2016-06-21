#include <iostream>
using namespace std;
int main()
{
	int i,j,k;
	int digit(int i,int j);
	cout << "please input the i and j: ";
	cin >> i >> j;
	k=digit(i,j);
	cout << "the number is " << k;
}

int digit(int i, int j)
{
	int iter;
	for (iter=1;iter<j;iter++)
	i=i/10;
	return i%10;
}
