#pragma once

#include <string>

using namespace std;

class Soldier{
public:
    Soldier(const string& NAME, int HEALTH, int ARMORSAVE);

    string GetName();
    int GetHealth();
    int GetArmorSave();
    bool isDead();

    virtual int Attack(Soldier& opponent.Defend()) = 0;
    virtual int Defend(Soldier& opponent.Defend()) = 0;

protected:
    string name;
    int health;
    int armorsave;

};
