#include "Soldier.h"

Soldier::Soldier(const string &NAME, int HEALTH, int ARMORSAVE)
    : name(NAME),
    health(HEALTH),
    armorsave(ARMORSAVE)
{

}

string Soldier::GetName(){
    return name;
}

int Soldier::GetHealth(){
    return health;
}

int Soldier::GetArmorSave(){
    return armorsave;
}

bool Soldier::isDead(){
    return health <= 0;
}
