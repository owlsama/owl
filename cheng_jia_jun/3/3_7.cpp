#include <iostream>
using namespace std;
int main()
{
	double weight,distance;
	int cost;
	cout << "please input the weight(g): ";
	cin >> weight ;
	cout << "please input the distance(km): ";
	cin >> distance ;
	distance=int(distance)/1000;
	if (weight >60)
	cost=15+2*distance;
	else if (weight>45)
	cost=14+distance;
	else if (weight>30)
	cost=12;
	else if (weight>15)
	cost=9;
	else if (weight>0)
	cost=5;
	else 
	cout << "wrong weight!" ;
	cout<<"the cost is "<<cost<<endl;
}
