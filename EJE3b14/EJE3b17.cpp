# include <iostream>

using namespace std;

int main() 
{

	int any;
	 
	cout << "introdueix any ";

	cin >> any;

	if (any % 4 == 0 && any % 100 != 0 || any % 400 == 0) 
	{
		cout << "l'any es de traspas" << endl;
	}
	else 
	{
		cout << "l'any no es de traspas" << endl;
	}



}