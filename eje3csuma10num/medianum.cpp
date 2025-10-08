#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int contador = 0;

    cout << "Introdueix els nombres de la sequencia (0 per acabar): ";

    do {
        cin >> numero;

        if (numero != 0) {
            suma += numero;
            contador++;
        }

    } while (numero != 0);

    if (contador == 0) {
        cout << "Error: La sequencia es buida. No es pot calcular la mitjana." << endl;
    }
    else {
        double mitjana = static_cast<double>(suma) / contador;
        cout << "Mitjana dels nombres de la sequencia: " << mitjana << endl;
    }

    return 0;
}