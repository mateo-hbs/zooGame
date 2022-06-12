#ifndef IHABITAT_H
#define IHABITAT_H
#include <vector>
#include <string>
#include "ianimal.h"
#include "zoo.h"

using namespace std;

class IAnimal;
typedef vector<IAnimal*> Animal;

class IHabitat {
private:
    Animal tigre;
    Animal aigle;
    Animal poule;
    int capacity;
    int buyPrice;
    int sellPrice;
    int random_Event;
    int deathDuringMaladie;
protected:
    string _name;
public:
    IHabitat(string name, string type);
    ~IHabitat();
    string getNameHabitat();
    void addTigre(IAnimal* animal);
    void addAigle(IAnimal* animal);
    void addPoule(IAnimal* animal);
    void delTigre();
    void delAigle();
    void delPoule();
    int getTigreCount();
    int getAigleCount();
    int getPouleCount();
    int getAnimalCount();
    void thief();
    void randomMaladie();                   
    void randomEvent();                     
    // bool isSurpopulation();             //Songer a la passer en virtual
};
#endif