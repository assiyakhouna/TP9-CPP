#ifndef CHERCHEUR_HPP
#define CHERCHEUR_HPP

#include <iostream>
#include <string>
using namespace std;

class Chercheur {
protected:
    string domaineRecherche;

public:
    Chercheur(string domaine);

    void afficher();
};

#endif