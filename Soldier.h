#pragma once

#include <string>

class Soldier{
public:
    Soldier(const std::string& NAME, int HEALTH, int ARMORSAVE, bool ISDEAD);
    virtual ~Soldier() {};

    std::string GetName();
    int GetHealth();
    int GetArmorSave();
    bool isDead();

    virtual void Attack(Soldier& opponent) = 0;
    virtual void Defend(Soldier& opponent) = 0;

protected:
    std::string name;
    int health;
    int armorsave;
    bool isdead;

};
