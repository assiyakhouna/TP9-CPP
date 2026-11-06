#ifndef EMPLOYEPOLYVALENT_HPP
#define EMPLOYEPOLYVALENT_HPP

#include "Technicien.hpp"
#include "Comptable.hpp"

class EmployePolyvalent : public Technicien, public Comptable {
public:
    EmployePolyvalent(double s1, double s2);

    void afficherTousSalaires();
};

#endif