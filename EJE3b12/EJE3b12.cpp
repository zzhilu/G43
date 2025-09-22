
#include <iostream>

using namespace std;
int main()
{
	int aux;

	int num1, num2;
	cout << "Ingrese primero numeros enteros: ";
	cin >> num1 ;


	cout << "Ingrese secondo numeros enteros: ";
	cin >> num2;

	if (num1 > num2)
	{
		aux = num2;
		num2 = num1;
		num1 = aux;
	
	}
	
	cout << "El valor de num1 es "<< num1 << " y el valor de num2 es "<< num2 << endl;

}


