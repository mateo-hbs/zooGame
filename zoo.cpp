#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <time.h>

#include "zoo.h"
#include "IHabitat.h"

using namespace std;


Zoo::Zoo() {
    meat = 100;
    seed = 1000;
    wallet = 80000;
}
Zoo::~Zoo() {
}

void Zoo::addHabitatTigre(IHabitat* habitat) {
    habitat_tigre.push_back(habitat);
}

void Zoo::addHabitatAigle(IHabitat* habitat) {
    habitat_aigle.push_back(habitat);
}

void Zoo::addHabitatPoule(IHabitat* habitat) {
    habitat_poule.push_back(habitat);
}

void Zoo::delHabitatTigre() {
    habitat_tigre.pop_back();
}
void Zoo::delHabitatAigle() {
    habitat_tigre.pop_back();
}
void Zoo::delHabitatPoule() {
    habitat_tigre.pop_back();
}

int Zoo::getHabitatCount() {
    return habitat_tigre.size() + habitat_aigle.size() + habitat_tigre.size();
}

void Zoo::onFire() {
        cout << "Damn the zoo is on Fire, -1 habitat" << endl;
        srand(time(NULL));
        random = rand() % 3 + 1;
        switch (random) {
        case 1:
            habitat_tigre.pop_back();
            break;
        case 2:
            habitat_aigle.pop_back();
        case 3:
            habitat_poule.pop_back();
        default:
            break;
        }
        cout << "nombre habitat restant : " << getHabitatCount() << endl;
}

void Zoo::rottenMeat() {
        cout << "Damn we have spoiled meat, -20% meat" << endl;
        meat = meat * 0.8;
        cout << "stock meat : " << meat << endl;
}

void Zoo::rottenSeed() {
        cout << "Damn we have spoiled seed, -10% seed" << endl;
        seed = seed * 0.9;
        cout << "stock seed : " << seed << endl;
}

void Zoo::randomEvent() {
    srand(time(NULL));
    proba = rand() % 100 + 1;
    // cout << "random = " << proba << endl;
    if (proba == 1) {
        onFire();
    } else if (proba > 1 && proba < 11) {
        rottenMeat();
    } else if (proba > 11 && proba < 31) {
        rottenSeed();
    } else {
        cout << "No random Event this turn" << endl;
    }
}

int Zoo::getWallet() {
    return wallet;
}

int Zoo::ajoutWallet(int valeur) {
    wallet = wallet + valeur;
    return wallet;
}

int Zoo::moinsWallet(int valeur) {
    wallet = wallet - valeur;
    return wallet;
}

int Zoo::addMeat(int valeur) {
    meat = meat + valeur;
    return meat;
}
int Zoo::addSeed(int valeur) {
    seed = seed + valeur;
    return seed;
}

int Zoo::nextTurn() {
    _turn++;
    return _turn;
}

int Zoo::walletMeat() {
    return meat;
}
int Zoo::walletSeed() {
    return seed;
}