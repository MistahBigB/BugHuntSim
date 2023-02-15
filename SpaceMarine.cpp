#include <string>
#include <iostream>

#include "SpaceMarine.h"
#include "Bug.h"

using namespace std;

//attributes set in main in source.cpp
Marine::Marine(const string& NAME, int HEALTH, int ARMORSAVE)
    : Soldier(NAME, HEALTH, ARMORSAVE)

{

}

int Marine::Attack(Soldier& opponent) {
    int rollToHit = rand() % 10;
    if (rollToHit > 5) {
        cout << "Marine hits!\n";
        cout << "Rolling to wound...\n";
        int rollToWound = rand() % 10;
        if (rollToWound > 8) {
            Bug::Defend(Soldier& opponent.Defend());
        }
    } else {
        cout << "Marine missed!\n";
        //return;
    }

}

int Marine::Defend(Soldier& opponent) {
    int rollArmorSave = (rand() % 10 ) + Marine.ARMORSAVE;
    if (rollArmorSave < rand() % 10) {
        cout << "Bug wounds!\n";
        Marine.health -=1;
    } else {
        cout << "Armor holds!\n";
    }

}
