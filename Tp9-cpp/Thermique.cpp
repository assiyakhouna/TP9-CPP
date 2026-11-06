#include "Thermique.hpp"

Thermique::Thermique(double c)
    : Vehicule("", "") {
    consommation = c;
}

void Thermique::afficherThermique() {
    cout << "Consommation carburant : "
         << consommation << " L/100km" << endl;
}