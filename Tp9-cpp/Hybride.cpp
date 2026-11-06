#include "Hybride.hpp"

Hybride::Hybride(string m, string mod, double c, double a)
    : Vehicule(m, mod),
      Thermique(c),
      Electrique(a) {
}

void Hybride::afficherCaracteristiques() {
    cout << "===== VEHICULE HYBRIDE =====" << endl;

    afficherVehicule();
    afficherThermique();
    afficherElectrique();
}