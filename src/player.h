#ifndef __PLAYER_H
#define __PLAYER_H

#include <vector>
#include "character.h"
#include "object.h"

using namespace std;

class Player : public Character {
    private:
        static const int MAX_INVENTORY_SIZE = 10;
        vector<Object *> inventory;
        vector<Object *> equipment;

    public:
        int getSpeed();
        int getAttackDamage();
        bool canPickUpObject();
        void addObjectToInventory(Object *);
        Player();
        ~Player();
};
#endif
