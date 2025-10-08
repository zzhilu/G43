
#include <iostream>
    using namespace std;

    int main() {
        char continuar = 'S';

        while (continuar == 'S' || continuar == 's') {
            double num1, num2;
            int opcio;

        
            cout << "Introdueix el primer nombre: ";
            cin >> num1;
            cout << "Introdueix el segon nombre: ";
            cin >> num2;

            bool sortir = false;

            while (!sortir) {
               
                cout << "MENU" << endl;
                cout << "1.- Suma" << endl;
                cout << "2.- Resta" << endl;
                cout << "3.- Producte" << endl;
                cout << "4.- Divisio" << endl;
                cout << "5.- Sortir" << endl;
                cout << "Selecciona una de les opcions: ";
                cin >> opcio;

                switch (opcio) {
                case 1: 
                    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                    break;

                case 2:
                    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                    break;

                case 3:
                    cout << num1 << " x " << num2 << " = " << (num1 * num2) << endl;
                    break;

                case 4: 
                    if (num2 == 0) {
                        cout << "Error: Divisio per zero" << endl;
                    }
                    else {
                        cout << num1 << " : " << num2 << " = " << (num1 / num2) << endl;
                    }
                    break;

                case 5: 
                    sortir = true;
                    break;

                default:
                    cout << "Error: Opcio no valida" << endl;
                    break;
                }
            }

           
            cout << "Vols operar amb uns altres operands? (S/-): ";
            cin >> continuar;
        }

        cout << "Programa finalitzat." << endl;

        return 0;
    }