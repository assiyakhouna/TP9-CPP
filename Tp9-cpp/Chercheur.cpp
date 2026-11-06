#include "Chercheur.hpp"

Chercheur::Chercheur(string domaine) {
    domaineRecherche = domaine;
}

void Chercheur::afficher() {
    cout << "Domaine de recherche : "
         << domaineRecherche << endl;
}