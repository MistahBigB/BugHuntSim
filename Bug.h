#pragma once

#include <string>
#include "Soldier.h"

using namespace std;

class Bug : public Soldier {
public:
    Bug();

    virtual int Attack() override;
    virtual int Defend() override;
};
