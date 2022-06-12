#ifndef IANIMAL_H
#define IANIMAL_H
#include <string>
#include "IHabitat.h"
#include "zoo.h"

using namespace std;

class IAnimal {
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
    IAnimal(string name, bool sexe, int age_mois);
    virtual ~IAnimal();
    void setName(string);
    string getName();
    void incrementAge();
    int getAge();
    bool isAlive();
    void killMe();
    bool getSexe(); 
    void whatSexe(); 
    bool setMale();
    bool setFemele();
    void endOfLife();
    bool isFertile();
    void menopause();
    int litter(); // ponte/portée
    
};

#endif
