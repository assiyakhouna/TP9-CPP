#ifndef THERMIQUE_HPP
#define THERMIQUE_HPP

#include "Vehicule.hpp"

class Thermique : virtual public Vehicule {
protected:
    double consommation;

public:
    Thermique(double c);

    void afficherThermique();
};

#endif