#ifndef POULE_H
#define POULE_H

#include "ianimal.h"

class Poule : public IAnimal
{
private:
    bool male;
    int deathAge;
    int menopauseAge;

public:
    Poule(string name, bool sexe, int age_mois);
};

#endif