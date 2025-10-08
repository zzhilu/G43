#include <iostream>

using namespace std;

int main() {
    int hores, minuts, segons;
    char dosPunts;

    cin >> hores >> dosPunts >> minuts >> dosPunts >> segons;

    segons++;
    if (segons == 60) {
        segons = 0;
        minuts++;

        if (minuts == 60) {
            minuts = 0;
            hores++;

            if (hores == 24) {
                hores = 0;
            }
        }
    }



}
