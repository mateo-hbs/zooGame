#include "tigre.h"
#include <iostream>

using namespace std;

Tigre::Tigre(string name, bool sexe, int age_mois) : IAnimal(name, sexe, age_mois)
{
    deathAge = 300;
    menopauseAge = 168;
    cout << "je m'appelle " << name << endl;
    cout << "j'ai " << age_mois << " mois" << endl;
    cout << "\n" << endl;
}