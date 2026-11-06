#ifndef MODERATEUR_HPP
#define MODERATEUR_HPP

#include "Utilisateur.hpp"

class Moderateur : virtual public Utilisateur {
protected:
    int niveauModeration;

public:
    Moderateur(int niveau);

    void modererContenu();
};

#endif