#include "Electrique.hpp"

Electrique::Electrique(double a)
    : Vehicule("", "") {
    autonomie = a;
}

void Electrique::afficherElectrique() {
    cout << "Autonomie batterie : "
         << autonomie << " km" << endl;
}