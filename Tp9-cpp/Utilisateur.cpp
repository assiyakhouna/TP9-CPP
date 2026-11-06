#include "Utilisateur.hpp"

Utilisateur::Utilisateur(int id, string l) {
    identifiant = id;
    login = l;
}

void Utilisateur::afficherUtilisateur() {
    cout << "Identifiant : " << identifiant << endl;
    cout << "Login : " << login << endl;
}