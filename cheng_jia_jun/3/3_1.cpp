#include <iostream>
using namespace std;
int main()
{
	double f,c;
	cout << "input the f-temperature:" ;
	cin >> f ;
	c=(f-32.0)*5.0/9.0;
	cout << "the c-temperature is: " << c << endl;
}
