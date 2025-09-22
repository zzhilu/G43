# include <iostream>

using namespace std;

int main()
{
   
    int AnoActual;

    int edad;

    int fechaNaci;

    AnoActual = 2025;

    cout << "Any de neixament ";
	cin  >> fechaNaci;

	edad = AnoActual - fechaNaci;

	cout << "Tens " << edad << " anys" << endl;

        return 0;
}