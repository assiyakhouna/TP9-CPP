#include "Administrateur.hpp"

Administrateur::Administrateur(string d)
    : Utilisateur(0, "") {
    droitsAcces = d;
}

void Administrateur::gererSysteme() {
    cout << "Droits d'acces : " << droitsAcces << endl;
    cout << "L'administrateur gere le systeme." << endl;
}