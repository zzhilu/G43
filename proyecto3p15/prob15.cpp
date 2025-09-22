#include <iostream>

using namespace std;

int main()
{

	int x ;

	float rest ,rest2;
	cout << "INTRO EL VALOR x : ";
	cin >> x;

	rest = 2.0 /( x+4);
	rest2 = (1.0 + 4 - x) / (3*(x+3));

	
	cout << "EL RESULTADO DE LA PRIMERA EXPRESION ES: " << rest << endl;
	cout << "EL RESULTADO DE LA SECONDA EXPRESION ES: " << rest2 << endl;


}


