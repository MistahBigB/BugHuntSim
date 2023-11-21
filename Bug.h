#pragma once

#include <string>
#include "Soldier.h"

class Bug : public Soldier {
public:
    Bug();
    virtual ~Bug() {}

    virtual void Attack(Soldier& opponent) override;
    virtual void Defend(Soldier& opponent) override;
};
