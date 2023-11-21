#pragma once

#include <string>
#include "Soldier.h"

class Marine : public Soldier {
public:
    Marine(const std::string &NAME, int HEALTH, int ARMORSAVE, bool ISDEAD);
    virtual ~Marine();

    virtual void Attack(Soldier& opponent) override;
    virtual void Defend(Soldier& opponent) override;
};
