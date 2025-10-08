#include <iostream>
#include <cmath>
#include "Aleatori.h"

using namespace std;

int main() {

    int Generacions;
    int Conill;
    int Guineu;
    cout << "Benvingut al FoxRabbit! Si us plau, quantes generacions vols estudiar?" << endl;
    cin >> Generacions;
    while (Generacions <= 0) {
        cout << "Introdueix un nombre enter positiu: quantes generacions vols estudiar?" << endl;
        cin >> Generacions;
    }



    cout << "Introdueix el nombre inicial de conills:" << endl;
    cin >> Conill;
    while (Conill <= 0) {
        cout << "Error. Introdueix el nombre inicial de conills:" << endl;
        cin >> Conill;
    }
    cout << "Introdueix el nombre inicial de guineus:" << endl;
    cin >> Guineu;
    while (Guineu <= 0) {
        cout << "Error. Introdueix el nombre inicial de guineus:" << endl;
        cin >> Guineu;
    }


    float  alpha, beta, gamma_, delta;
    cout << "Introdueix el factor de creixement dels conills:" << endl;
    cin >> alpha;
    while (alpha <= 0) {
        cout << "Error. Introdueix el factor de creixement dels conills:" << endl;
        cin >> alpha;
    }

    cout << "Introdueix el factor depredador guineu-conill:" << endl;
    cin >> beta;
    while (beta <= 0) {
        cout << "Error. Introdueix el factor depredador guineu-conill:" << endl;
        cin >> beta;
    }

    cout << "Introdueix el factor de mortalitat de les guineus:" << endl;
    cin >> gamma_;
    while (gamma_ <= 0) {
        cout << "Error. Introdueix el factor de mortalitat de les guineus:" << endl;
        cin >> gamma_;
    }

    cout << "Introdueix el factor de creixement de les guineus:" << endl;
    cin >> delta;
    while (delta <= 0) {
        cout << "Error. Introdueix el factor de creixement de les guineus:" << endl;
        cin >> delta;
    }


    int conills = Conill;
    int guineus = Guineu;

    // 5.2
    for (int gen = 1; gen <= Generacions; ++gen) {
        int pert = Aleatori(-2, 2);
        if (pert == 1) {
            delta *= 1.01;
        }
        else if (pert == 2) {
            alpha *= 1.01;
        }
        else if (pert == -1) {
            gamma_ *= 1.01;
        }
        else if (pert == -2) {
            beta *= 1.01;
        }

        // 5.1
        float  new_conills =
            conills + alpha * conills - beta * conills * guineus;
        float  new_guineus =
            guineus - gamma_ * guineus + delta * conills * guineus;

        conills = static_cast<int>(round(new_conills));
        guineus = static_cast<int>(round(new_guineus));

        // 5.3
        cout << "Hem estudiat " << gen << " generacions i.." << endl;
        cout << "tenim " << guineus << " guineus" << endl;
        cout << "tenim " << conills << " conills" << endl;

        if (conills <= 0 || guineus <= 0) break;
    }



    return 0;
}