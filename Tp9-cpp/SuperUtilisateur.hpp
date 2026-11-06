#ifndef SUPERUTILISATEUR_HPP
#define SUPERUTILISATEUR_HPP

#include "Administrateur.hpp"
#include "Moderateur.hpp"

class SuperUtilisateur : public Administrateur, public Moderateur {
public:
    SuperUtilisateur(int id, string login,
                     string droits, int niveau);

    void afficherTout();
};

#endif