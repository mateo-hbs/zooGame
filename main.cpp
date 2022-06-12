#include <stdio.h>
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

#include "zoo.h"
#include "IHabitat.h"
#include "ianimal.h"

#include "tigre.h"
#include "aigle.h"
#include "poule.h"

int main()
{
    srand(time(NULL));
    // Create Zoo object
    Zoo zoo;
    // program loop condition (program runs until false)
    bool continueSession = true;
    char input;
    int turn = 0;
    // declare variables for use in menu function
    IAnimal *animalPtr;
    string addAnimalName;
    IHabitat *habitatPtr;
    char typeAnimal;
    char typeHabitat;
    int selectAnimal;
    int exit = 0;
    int choice;
    char whichFood;
    int foodQuantity;
    int ageAchat;
    int animalPrice;
    bool chickenSexe;

    // Append 2 couples of Tigrers
    animalPtr = new Tigre("tigre 0", true, 48);
    animalPtr = new Tigre("tigre 1", false, 48);
    animalPtr = new Tigre("tigre 2", true, 48);
    animalPtr = new Tigre("tigre 3", false, 48);

    // Append 2 couples of Aigles
    animalPtr = new Aigle("aigle 0", true, 48);
    animalPtr = new Aigle("aigle 1", false, 48);
    animalPtr = new Aigle("aigle 2", true, 48);
    animalPtr = new Aigle("aigle 3", false, 48);

    // Append 9 Poules and 1 Coq

    for (int i=0; i<9; i++) {
        animalPtr = new Poule("Poule" + to_string(i), false, 6);
    }
    animalPtr = new Poule("Coq", true, 6);

    while (turn < 120)
    {
        zoo.nextTurn();
        turn++;
        cout << "------Turn number : " << turn << "-----" << endl;
        zoo.randomEvent();
        cout << "your bank account is now:" << zoo.getWallet() << endl;
        cout << "your stock of Seed is about " << zoo.walletSeed() << " KG" << endl;
        cout << "your stock of Meat is about " << zoo.walletMeat() << " KG" << endl;
        // cout << "Your animals got " << animalPtr->getAge() << " old" << endl;
        // Output menu options
        cout << "\n\nWhat would you like to do?" << endl;
        cout << "(a) Buy animal" << endl;
        cout << "(b) Sell animal" << endl;
        cout << "(c) Buy Food!" << endl;
        cout << "(d) Buy Habitat" << endl;
        cout << "(e) Sell Habitat" << endl;
        // get input from the user to select option
        cin >> input;

        cout << "\n";
        // implement functionality of each choice
        switch (input)
        {
        case 'a':
            do
            {
                exit = 0;
                cout << "Please select which animal to add:" << endl;

                cout << "(a) Tigre" << endl;
                cout << "(b) Aigle" << endl;
                cout << "(c) Poule/coq" << endl;

                cin >> typeAnimal;

                cout << "\n";

                cout << "your bank account is now:" << zoo.getWallet() << endl;
                switch (typeAnimal)
                {
                case 'a':
                    cout << "Please select the age of the tiger you wanna buy:" << endl;

                    cout << "(1) 6mois" << endl;
                    cout << "(2) 4ans" << endl;
                    cout << "(3) 14ans" << endl;
                    cin >> choice;
                    if (choice == 1)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Tigre(addAnimalName, true, 6);
                        animalPtr->whatSexe();
                        zoo.moinsWallet(3000);
                        zoo.getWallet();
                    }
                    if (choice == 2)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Tigre(addAnimalName, false, 48);
                        animalPtr->whatSexe();
                        zoo.moinsWallet(120000);
                        zoo.getWallet();
                    }
                    if (choice == 3)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Tigre(addAnimalName, true, 168);
                        animalPtr->whatSexe();
                        zoo.moinsWallet(60000);
                        zoo.getWallet();
                    }
                    break;
                case 'b':

                    cout << "Please select the age of the Aigle you wanna buy:" << endl;

                    cout << "(1) 6mois" << endl;
                    cout << "(2) 4ans" << endl;
                    cout << "(3) 14ans" << endl;
                    cin >> choice;
                    if (choice == 1)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Aigle(addAnimalName, true, 6);
                        animalPtr->whatSexe();
                        zoo.moinsWallet(1000);
                        zoo.getWallet();
                    };
                    if (choice == 2)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Aigle(addAnimalName, false, 48);
                        animalPtr->whatSexe();
                        zoo.moinsWallet(4000);
                        zoo.getWallet();
                    };
                    if (choice == 3)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Aigle(addAnimalName, true, 168);
                        animalPtr->whatSexe();
                        zoo.moinsWallet(2000);
                        zoo.getWallet();
                    };
                    break;
                case 'c':
                    cout << "Please select the age of the poule you wanna buy:" << endl;

                    cout << "(1) 6mois Poule" << endl;
                    cout << "(2) 6mois Coq" << endl;
                    cin >> choice;
                    if (choice == 1)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Poule(addAnimalName, false, 6);
                        zoo.moinsWallet(20);
                        zoo.getWallet();
                    };
                    if (choice == 2)
                    {
                        cout << "what is his name ?" << endl;
                        cin >> addAnimalName;
                        animalPtr = new Poule(addAnimalName, true, 6);
                        zoo.moinsWallet(100);
                    };
                    break;
                default:
                    cout << "Please enter a valid value\n"
                         << endl;
                    exit = 1;
                    cout << exit << endl;
                    break;
                }
            } while (exit == 1);
            break;
        case 'b':
            exit = 0;
            cout << "Please select which Animal to Sell:" << endl;

            cout << "(a) Tigre" << endl;
            cout << "(b) Aigle" << endl;
            cout << "(c) Poule/coq" << endl;
            cin >> typeHabitat;
            cout << "\n";
            cout << "your bank account is now:" << zoo.getWallet() << endl;
            if (typeAnimal == 'a')
            {
                animalPtr->~IAnimal();
                zoo.ajoutWallet(500);
            }
            if (typeAnimal == 'b')
            {
                animalPtr->~IAnimal();
                zoo.ajoutWallet(500);
            }
            if (typeAnimal == 'c')
            {
                animalPtr->~IAnimal();
                zoo.ajoutWallet(50);
            }
            break;
        case 'c':
            exit = 0;
            cout << "Please select which food to add:" << endl;

            cout << "(a) Meat" << endl;
            cout << "(b) Seed" << endl;

            cin >> whichFood;

            cout << "\n";

            cout << "your bank account is now:" << zoo.getWallet() << endl;
            if (whichFood == 'a')
            {
                cout << "how many KG of Meat you want to add ?" << endl;
                cout << "the price is 5$ /KG" << endl;
                cin >> foodQuantity;
                zoo.addMeat(foodQuantity);
                zoo.moinsWallet(foodQuantity * 5);
                cout << "your stock of Meat is about " << zoo.walletMeat() << " KG" << endl;
            }
            if (whichFood == 'b')
            {
                cout << "how many KG of Seed you want to add ?" << endl;
                cout << "the price is 2.5$ /KG" << endl;
                cin >> foodQuantity;
                zoo.addSeed(foodQuantity);
                zoo.moinsWallet(foodQuantity * 2.5);
                cout << "your stock of Seed is about " << zoo.walletSeed() << " KG" << endl;
            }
            break;
        case 'd':
            exit = 0;
            cout << "Please select which habitat to add:" << endl;

            cout << "(a) Tigre" << endl;
            cout << "(b) Aigle" << endl;
            cout << "(c) Poule/coq" << endl;
            cin >> typeHabitat;
            cout << "\n";
            cout << "your bank account is now:" << zoo.getWallet() << endl;
            if (typeAnimal == 'a')
            {
                IHabitat *habitatPtr = new IHabitat("Habitat", "tigre");
                zoo.addHabitatTigre(habitatPtr);
                zoo.moinsWallet(2000);
            }
            if (typeAnimal == 'b')
            {
                IHabitat *habitatPtr = new IHabitat("Habitat", "aigle");
                zoo.addHabitatTigre(habitatPtr);
                zoo.moinsWallet(2000);
            }
            if (typeAnimal == 'c')
            {
                IHabitat *habitatPtr = new IHabitat("Habitat", "poule");
                zoo.addHabitatTigre(habitatPtr);
                zoo.moinsWallet(300);
            }
            break;
        case 'e':
            exit = 0;
            cout << "Please select which habitat to Sell:" << endl;

            cout << "(a) Tigre" << endl;
            cout << "(b) Aigle" << endl;
            cout << "(c) Poule/coq" << endl;
            cin >> typeHabitat;
            cout << "\n";
            cout << "your bank account is now:" << zoo.getWallet() << endl;
            if (typeAnimal == 'a')
            {
                habitatPtr->~IHabitat();
                zoo.ajoutWallet(500);
            }
            if (typeAnimal == 'b')
            {
                habitatPtr->~IHabitat();
                zoo.ajoutWallet(500);
            }
            if (typeAnimal == 'c')
            {
                habitatPtr->~IHabitat();
                zoo.ajoutWallet(50);
            }
            break;
        default:
            cout << "Please enter a valid value\n"
                 << endl;
            exit = 1;
            cout << exit << endl;
            break;
        }
        animalPtr->incrementAge();
    }
    return 0;
}
