#include <string>
#include <iostream>

#include "Bug.h"
#include "SpaceMarine.h"

//attributes set here
Bug::Bug()
    : Soldier("ix", 2, 3, false)
    //name, health, armorsave
{}

void Bug::Attack(Soldier& opponent) {
    int rollToHit = rand() % 10;
    if (rollToHit > 8) {
        std::cout << "Bug hits!\n";
        std::cout << "Rolling to wound...\n";
        int rollToWound = rand() % 10;      //will add str/weapon skill or something later
        if (rollToWound > 8) {
            opponent.Defend(*this);
        }
    } else {
        std::cout << "Bug missed!\n";
    }

}

void Bug::Defend(Soldier& opponent) {
    int rollArmorSave = (rand() % 10 ) + this->GetArmorSave();
    if ( rollArmorSave < rand() % 10) {
        std::cout << "Marine wounds!\n";
        this->health -=1;
        if (this->isDead()) {
            std::cout << "Bug is dead!\n";
        }
    } else {
        std::cout << "Chitin holds!\n";
    }
}


