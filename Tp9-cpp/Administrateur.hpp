#ifndef ADMINISTRATEUR_HPP
#define ADMINISTRATEUR_HPP

#include "Utilisateur.hpp"

class Administrateur : virtual public Utilisateur {
protected:
    string droitsAcces;

public:
    Administrateur(string d);

    void gererSysteme();
};

#endif