#include "Soldier.h"

Soldier::Soldier(const std::string &NAME, int HEALTH, int ARMORSAVE, bool ISDEAD)
    : name(NAME), health(HEALTH), armorsave(ARMORSAVE), isdead(ISDEAD) {}

std::string Soldier::GetName(){
    return name;
}

int Soldier::GetHealth(){
    return health;
}

int Soldier::GetArmorSave(){
    return armorsave;
}

bool Soldier::isDead(){
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}
