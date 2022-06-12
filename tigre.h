#ifndef TIGRE_H
#define TIGRE_H

#include "ianimal.h"

class Tigre : public IAnimal
{
private:
    int maleOrFemele;
    bool male;
    int age;
    bool is_Alive;
    int deathAge;
    int menopauseAge;
    bool is_Fertile;
protected:
    string name;
    bool sexe;
    int age_mois;
public:
    Tigre(string name, bool sexe, int age_mois);
};

#endif