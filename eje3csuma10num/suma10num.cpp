
#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int i = 1;

    do {
        suma += i;
        i++;
    } while (i <= 10);

    cout << suma;

    return 0;
}