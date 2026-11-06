#include <iostream>
#include "SuperUtilisateur.hpp"

using namespace std;

int main() {

    int choix;

    int id;
    string login;
    string droits;
    int niveau;

    SuperUtilisateur* user = nullptr;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Creer un SuperUtilisateur" << endl;
        cout << "2. Afficher les informations" << endl;
        cout << "3. Gerer le systeme" << endl;
        cout << "4. Moderer le contenu" << endl;
        cout << "0. Quitter" << endl;

        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {

        case 1:
            cout << "Identifiant : ";
            cin >> id;

            cout << "Login : ";
            cin >> login;

            cout << "Droits d'acces : ";
            cin >> droits;

            cout << "Niveau de moderation : ";
            cin >> niveau;

            delete user;
            user = new SuperUtilisateur(id, login, droits, niveau);

            cout << "Utilisateur cree avec succes !" << endl;
            break;

        case 2:
            if (user != nullptr)
                user->afficherTout();
            else
                cout << "Veuillez creer un utilisateur d'abord." << endl;
            break;

        case 3:
            if (user != nullptr)
                user->gererSysteme();
            else
                cout << "Aucun utilisateur !" << endl;
            break;

        case 4:
            if (user != nullptr)
                user->modererContenu();
            else
                cout << "Aucun utilisateur !" << endl;
            break;

        case 0:
            cout << "Au revoir !" << endl;
            break;

        default:
            cout << "Choix invalide !" << endl;
        }

    } while (choix != 0);

    delete user;

    return 0;
}