#include <iostream>
using namespace std;
int main()
{
	char ch1,ch2='\0';
	int i=0;
	for(cin >> ch1; ch1 != '#';cin >> ch1)
    {
    	if(ch1=='=' && ch2=='>')
    	i++;
    	ch2=ch1;
	}
	cout << "the number of >= is : " << i << endl;
}
