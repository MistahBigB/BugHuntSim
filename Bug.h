#pragma once

#include <string>
#include "Soldier.h"

using namespace std;

class Bug : public Soldier {
public:
    Bug();

    virtual int Attack(Soldier& opponent) override;
    virtual int Defend(Soldier& opponent) override;
};
