#include "Personne.hpp"

Personne::Personne(string n, string p) {
    nom = n;
    prenom = p;
}

void Personne::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Prenom : " << prenom << endl;
}