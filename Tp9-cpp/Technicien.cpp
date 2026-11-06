#include <iostream>
#include "Technicien.hpp"
using namespace std;

Technicien::Technicien(double s) {
    salaire = s;
}

void Technicien::afficherSalaire() {
    cout << "Salaire Technicien : " << salaire << " DH" << endl;
}