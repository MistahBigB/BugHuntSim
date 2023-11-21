#include <string>
#include <iostream>

#include "SpaceMarine.h"
#include "Bug.h"

//attributes set in main in source.cpp
Marine::Marine(const std::string& NAME, int HEALTH, int ARMORSAVE, bool ISDEAD)
    : Soldier(NAME, HEALTH, ARMORSAVE, ISDEAD) {}

Marine::~Marine() {}

void Marine::Attack(Soldier& opponent) {
    int rollToHit = rand() % 10;
    if (rollToHit > 5) {
        std::cout << "Marine hits!\n";
        std::cout << "Rolling to wound...\n";
        int rollToWound = rand() % 10;
        if (rollToWound > 8) {
            opponent.Defend(*this);
        }
    } else {
        std::cout << "Marine missed!\n";
    }
}

void Marine::Defend(Soldier& opponent) {
    int rollArmorSave = (rand() % 10 ) + this->GetArmorSave();
    if (rollArmorSave < rand() % 10) {
        std::cout << "Bug wounds!\n";
        this->health -=1;
        if ( this->isDead()) {
            std::cout << "Marine is dead!\n";
        }
    } else {
        std::cout << "Armor holds!\n";
    }
}
