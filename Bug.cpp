#include <string>
#include <iostream>

#include "Bug.h"
#include "SpaceMarine.h"

using namespace std;

//attributes set here
Bug::Bug()
    : Soldier("ix", 2, 3)
    //name, health, armorsave
{

}

int Bug::Attack(Soldier& opponent) {
    int rollToHit = rand() % 10;
    if (rollToHit > 8) {
        cout << "Bug hits!\n";
        cout << "Rolling to wound...\n";
        int rollToWound = rand() % 10;      //will add str/weapon skill or something later
        if (rollToWound > 8) {
            Marine::Defend(Soldier& opponent.Defend());
        }
    } else {
        cout << "Bug missed!\n";
    }

}

int Bug::Defend(Soldier& opponent) {
    int rollArmorSave = (rand() % 10 ) + Soldier::GetArmorSave();
    if (rollArmorSave < rand() % 10) {
        cout << "Marine wounds!\n";
        Bug.health -=1;
    } else {
        cout << "Chitin holds!\n";
    }

}


