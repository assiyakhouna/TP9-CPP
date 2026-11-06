#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>
#include <string>
using namespace std;

class Personne {
protected:
    string nom;
    string prenom;

public:
    Personne(string n, string p);

    void afficher();
};

#endif