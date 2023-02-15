#pragma once

#include <string>
#include "Soldier.h"

using namespace std;

class Marine : public Soldier {
public:
    Marine(const string &NAME, int HEALTH, int ARMORSAVE);

    virtual int Attack(Soldier& opponent) override;
    virtual int Defend(Soldier& opponent) override;
};
