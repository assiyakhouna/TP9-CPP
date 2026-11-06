#include <iostream>
#include "EmployePolyvalent.hpp"
using namespace std;

EmployePolyvalent::EmployePolyvalent(double s1, double s2)
    : Technicien(s1), Comptable(s2) {
}

void EmployePolyvalent::afficherTousSalaires() {
    Technicien::afficherSalaire();
    Comptable::afficherSalaire();
}