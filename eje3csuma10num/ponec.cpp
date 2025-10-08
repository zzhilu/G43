#include <iostream>

using namespace std;

int main() {  
    int N;
    cin >> N;
    bool primero = true;

    for (int potencia = 1; potencia <= N; potencia *= 2) {
        if (!primero) {
            cout << " ";
        }
        cout << potencia;
        primero = false;
    }

    return 0 ;


 }

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int potencia;
    for (potencia = 1; potencia * 2 <= N; potencia *= 2) {
        cout << potencia << " ";
    }
    cout << potencia;

    return 0;
}