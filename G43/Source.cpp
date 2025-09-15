#include <iostream>

using namespace std;

int main() {
	
	float nota1, nota2, nota3, media;


	cout << "Digite as tres notas: ";
	cin >> nota1 >> nota2 >> nota3;

	
	media = (nota1 + nota2 + nota3) / 3;

	cout << "A media das notas e: ";

	cout << media << endl;
}