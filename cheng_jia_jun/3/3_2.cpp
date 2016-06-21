#include <iostream>
using namespace std;
int main()
{
	int h,m;
	cout << "please input the time:" ;
	cin >> h >> m;
	if (h>23||h<0)
	cout << "wrong hours!" ;
	else if (m<0||m>60)
	cout << "wrong minute!" ;
	else if (h>12)
	cout << h-12 << ":" << m << "pm";
	else if (h>=0&&h<=12)
	cout << h << ":" << m << "am";
	else ;
}
