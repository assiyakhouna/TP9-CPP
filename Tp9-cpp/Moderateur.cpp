#include "Moderateur.hpp"

Moderateur::Moderateur(int niveau)
    : Utilisateur(0, "") {
    niveauModeration = niveau;
}

void Moderateur::modererContenu() {
    cout << "Niveau de moderation : "
         << niveauModeration << endl;

    cout << "Le moderateur modere le contenu." << endl;
}