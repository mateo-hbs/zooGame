#include "poule.h"
#include <iostream>

using namespace std;

Poule::Poule(string name, bool sexe, int age_mois) : IAnimal(name, sexe, age_mois)
{
    deathAge = 180;
    menopauseAge = 96;
    cout << "je m'appelle " << name << endl;
    cout << "j'ai " << age_mois << " mois" << endl;
    cout << "\n" << endl;
}