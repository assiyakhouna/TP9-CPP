#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <iostream>
#include <string>
using namespace std;

class Vehicule {
protected:
    string marque;
    string modele;

public:
    Vehicule(string m, string mod);

    void afficherVehicule();
};

#endif