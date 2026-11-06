#include "EnseignantChercheur.hpp"

EnseignantChercheur::EnseignantChercheur(
    string n, string p, string domaine)
    : Personne(n, p), Chercheur(domaine) {
}

void EnseignantChercheur::afficher() {
    Personne::afficher();
    Chercheur::afficher();
}