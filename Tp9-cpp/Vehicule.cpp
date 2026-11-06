#include "Vehicule.hpp"

Vehicule::Vehicule(string m, string mod) {
    marque = m;
    modele = mod;
}

void Vehicule::afficherVehicule() {
    cout << "Marque : " << marque << endl;
    cout << "Modele : " << modele << endl;
}