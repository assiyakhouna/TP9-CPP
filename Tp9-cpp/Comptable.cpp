#include <iostream>
#include "Comptable.hpp"
using namespace std;

Comptable::Comptable(double s) {
    salaire = s;
}

void Comptable::afficherSalaire() {
    cout << "Salaire Comptable : " << salaire << " DH" << endl;
}