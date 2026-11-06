#ifndef ELECTRIQUE_HPP
#define ELECTRIQUE_HPP

#include "Vehicule.hpp"

class Electrique : virtual public Vehicule {
protected:
    double autonomie;

public:
    Electrique(double a);

    void afficherElectrique();
};

#endif