#ifndef ZOO_H
#define ZOO_H
#include <vector>
#include "IHabitat.h"

using namespace std;

class IHabitat;

typedef vector<IHabitat*> Habitat;

class Zoo {
private:
    Habitat habitat_tigre;
    Habitat habitat_aigle;
    Habitat habitat_poule;
    int proba;
    int probaMeat;
    int probaSeed;
    int probaOnFire;
    int wallet;
    int meat;
    int seed;
    int random;
    int _turn;
public:
    Zoo();
    ~Zoo();
    void addHabitatTigre(IHabitat* habitat);
    void addHabitatAigle(IHabitat* habitat);
    void addHabitatPoule(IHabitat* habitat);
    void delHabitatTigre();
    void delHabitatAigle();
    void delHabitatPoule();
    int getHabitatCount();
    void onFire();
    void rottenMeat();
    void rottenSeed();
    void randomEvent();
    int getWallet();
    int ajoutWallet(int);
    int moinsWallet(int);
    int addMeat(int);
    int addSeed(int);
    int nextTurn();
    int walletMeat();
    int walletSeed();
};

#endif // ZOO_H