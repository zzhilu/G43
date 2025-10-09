#include <iostream>
#include "Aleatori.h"   
using namespace std;

int main() {
    // Exercici 1: generacions
    int Generacions;
    cout << "Benvingut al FoxRabbit! Si us plau, quantes generacions vols estudiar?" << endl;
    cin >> Generacions;
    while (Generacions <= 0) {
        cout << "Introdueix un nombre enter positiu: quantes generacions vols estudiar?" << endl;
        cin >> Generacions;
    }

    // Exercici 3: inicials
    int Conill, Guineu;
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

    // Exercici 4: paràmetres (>0)
    float alpha, beta, gamma_, delta;
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

    // Estat actual
int conills = Conill;
int guineus = Guineu;

for (int gen = 1; gen <= Generacions; ++gen) {
    if (gen < Generacions) {
        int pert = Aleatori(-2, 2);
        if (pert == 1)       delta  *= 1.01f; 
        else if (pert == 2)  alpha  *= 1.01f; 
        else if (pert == -1) gamma_ *= 1.01f; 
        else if (pert == -2) beta   *= 1.01f; 
        double next_conills_f = conills + alpha * conills - beta  * conills * guineus;
        double next_guineus_f = guineus - gamma_ * guineus + delta * conills * guineus;

        conills = static_cast<int>(next_conills_f); 
        guineus = static_cast<int>(next_guineus_f);

        cout << "Hem estudiat " << gen << " generacions i.." << endl;
        cout << "tenim " << guineus << " guineus" << endl;
        cout << "tenim " << conills << " conills" << endl;

        if (conills <= 0 || guineus <= 0) break; 
    } else {
        cout << "Hem estudiat " << gen << " generacions i.." << endl;
        cout << "tenim " << guineus << " guineus" << endl;
        cout << "tenim " << conills << " conills" << endl;
       
        break;
    }
}


if (conills > 0 && guineus > 0) {
    cout << "Felicitats tens " << conills << " conills i " << guineus << " guineus." << endl;
} else {
    if (conills <= 0) cout << "Ho sento, has fet fallida. No et queden conills" << endl;
    if (guineus <= 0) cout << "Ho sento, has fet fallida. No et queden guineus" << endl;
}

    return 0;
}
