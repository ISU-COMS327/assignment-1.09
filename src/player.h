#ifndef __PLAYER_H
#define __PLAYER_H

#include <vector>
#include "character.h"
#include "object.h"

using namespace std;

class Player : public Character {
    public:
        Object * weapon;
        Object * offhand;
        Object * ranged;
        Object * armor;
        Object * helmet;
        Object * cloak;
        Object * gloves;
        Object * boots;
        Object * amulet;
        Object * light;
        Object * ring1;
        Object * ring2;
        vector<Object *> inventory;
        int getSpeed();
        int getAttackDamage();
        Player();
        ~Player();
};
#endif
