#ifndef COMPTABLE_HPP
#define COMPTABLE_HPP

class Comptable {
protected:
    double salaire;

public:
    Comptable(double s);
    void afficherSalaire();
};

#endif