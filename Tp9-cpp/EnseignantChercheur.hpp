#ifndef ENSEIGNANTCHERCHEUR_HPP
#define ENSEIGNANTCHERCHEUR_HPP

#include "Personne.hpp"
#include "Chercheur.hpp"

class EnseignantChercheur : public Personne, public Chercheur {

public:
    EnseignantChercheur(string n, string p, string domaine);

    void afficher();
};

#endif