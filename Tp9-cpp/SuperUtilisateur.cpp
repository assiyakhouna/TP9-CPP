#include "SuperUtilisateur.hpp"

SuperUtilisateur::SuperUtilisateur(int id, string l,
                                   string d, int niveau)
    : Utilisateur(id, l),
      Administrateur(d),
      Moderateur(niveau) {
}

void SuperUtilisateur::afficherTout() {
    cout << "\n===== SUPER UTILISATEUR =====" << endl;

    afficherUtilisateur();
    gererSysteme();
    modererContenu();
}