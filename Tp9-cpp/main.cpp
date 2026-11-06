#include <iostream>
#include "EnseignantChercheur.hpp"
using namespace std;

int main() {

    EnseignantChercheur e1(
        "Alami",
        "Ahmed",
        "Intelligence Artificielle"
    );

    cout << "=== Informations Enseignant Chercheur ===" << endl;

    e1.afficher();

    return 0;
}