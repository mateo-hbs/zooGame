#include <iostream>
#include <string>

#include "zoo.h"
#include "IHabitat.h"
#include "ianimal.h"

IHabitat::IHabitat(string name, string type) {
    // ------------Les tests sont fait pour un tigre, a variabiliser en fonction de l'animal------------
    capacity = 3; 
    buyPrice = 2000;
    sellPrice = 500;

    cout << __FUNCTION__ << " name:" << name << endl;
    cout << "type d'habitat : " << type << endl;
}
IHabitat::~IHabitat() {
}

string IHabitat::getNameHabitat()
{
    return _name;
}


void IHabitat::addTigre(IAnimal* animal) {
    tigre.push_back(animal);
}

int IHabitat::getTigreCount() {
    return tigre.size();
}

void IHabitat::addAigle(IAnimal* animal) {
    aigle.push_back(animal);
}

void IHabitat::delTigre() {
    tigre.pop_back();
}
void IHabitat::delAigle() {
    aigle.pop_back();
}
void IHabitat::delPoule() {
    poule.pop_back();
}

int IHabitat::getAigleCount() {
    return aigle.size();
}

void IHabitat::addPoule(IAnimal* animal) {
    poule.push_back(animal);
}

int IHabitat::getPouleCount() {
    return poule.size();
}

int IHabitat::getAnimalCount() {
    return tigre.size() + aigle.size() + poule.size();
}

void IHabitat::thief() {
    cout << "there is a roberry : -1 animal" << endl;
}

void IHabitat::randomMaladie() {
    srand(time(NULL));
    deathDuringMaladie = rand() % 10 + 1;
    cout << "random Maladie = " << deathDuringMaladie << endl;
    if (deathDuringMaladie <= 1) {
        cout << "aouch the animal is dead.... -1 ANimal" << endl;
    } else {
        cout << "Animal is not dead" << endl;
    }
}

void IHabitat::randomEvent() {
    srand(time(NULL));
    random_Event = rand() % 100 + 1;
    if (random_Event == 1) {
        thief();
    } else if (random_Event > 1 && random_Event <= 21) {
        randomMaladie();
    } else {
        cout << "No random Event this turn" << endl;
    }
}

// bool IHabitat::isSurpopulation() {
//     size(habitat_Tigre);
//     if (capacity > size(habitat_Tigre)) {
//         srand(time(NULL));
//         random_Event = rand() % 100 + 1;
//         if (random_Event <= 50) {
//             cout << "ANimal is dead 'cause of Surpopulation" << endl;
//             // destructeur animal -1 pour le tigre
//         }
//     }
// }