#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m;

	double z1;
	double z2; 
	cout << "m = ";
	cin >> m;


	z1 = (1 - 0.25 * pow(sin(2 * m), 2) + cos(2 * m));
	z2 = pow(cos(m), 2) + pow(cos(m), 4);
	
	cout << z1 << endl;
	cout << z2 << endl;

	cin.get();
	return 0;
};