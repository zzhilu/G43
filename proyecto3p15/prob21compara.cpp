#include <iostream>

using namespace std;

int main()
{

	int x, y, z;

	bool a, b, c;
	cout << "INTRO EL VALOR x  i  y i z: ";
	cin >> x >> y >> z;

	a = (x > 7) && ((y < z) || (7 >z));

	b = ((x == 'c') && (y < -5)) && ((z >= 100) || (z < 6));

	c = ((9 >= x) && (13 < y)) || (-36 >= z);

	cout << "a es: " << a << " b es: " << b << " c es: " << c << endl;


}


