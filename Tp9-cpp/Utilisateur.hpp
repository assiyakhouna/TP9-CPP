#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <iostream>
#include <string>
using namespace std;

class Utilisateur {
protected:
    int identifiant;
    string login;

public:
    Utilisateur(int id, string l);

    void afficherUtilisateur();
};

#endif