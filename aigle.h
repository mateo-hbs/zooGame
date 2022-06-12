#ifndef AIGLE_H
#define AIGLE_H

#include "ianimal.h"

class Aigle : public IAnimal
{
private:
    bool male;
    int deathAge;
    int menopauseAge;

public:
    Aigle(string name, bool sexe, int age_mois);
};

#endif