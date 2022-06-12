#include <string>
#include <iostream>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include "ianimal.h"
#include "zoo.h"

using namespace std;

IAnimal::IAnimal(string name, bool sexe, int age_mois)
{

}

IAnimal::~IAnimal()
{
    //dtor
}

void IAnimal::setName(string animalName){
  name = animalName; 
}

string IAnimal::getName() {
    return name;
}

void IAnimal::incrementAge() {
   age++;
}  

int IAnimal::getAge() {
    age = age_mois;
    return age;
}

bool IAnimal::isAlive() {
    return is_Alive;
}

void IAnimal::killMe() {
    cout << name << " as gone..." << endl;
    is_Alive = false;
}

bool IAnimal::getSexe() {
    // srand (time(NULL));
    maleOrFemele = rand() % 2 + 1;
    if (maleOrFemele == 1) {
        male = true;
    } else {
        male = false;
    }
    return male;
}

void IAnimal::whatSexe() {
    if (sexe == true) {
        cout << "je suis un male" << endl;
    } else {
        cout << "je suis une femelle" << endl;
    }
}

bool IAnimal::setMale() {
    male = true;
    return male;
}

bool IAnimal::setFemele() {
    male = false;
    return male;
}

void IAnimal::endOfLife() {
    if (age == deathAge) {
        killMe();
    }
}

void IAnimal::menopause() {
    if (age == menopauseAge) {
        is_Fertile = false;
    }
}