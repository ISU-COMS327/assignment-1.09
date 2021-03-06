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
        int getIndexToSwapEquipmentWith(string type);
        vector<int> getIndexOfEquipmentType(string type);
        string getEquipmentTypeFromIndex(int index);

    public:
        int getSpeed();
        int getAttackDamage();
        bool canPickUpObject();
        void addObjectToInventory(Object *);
        string viewInventoryObjectAt(int index);
        void equipObjectAt(int index);
        int getNumberOfItemsInInventory();
        bool objectExistsInInventoryAt(int index);
        Object * getInventoryItemAt(int index);
        int equipmentSlots();
        string equipmentSlotToString(int index);
        bool equipmentExistsAt(int index);
        Object * getEquipmentAt(int index);
        void takeOffEquipment(int index);
        void removeInventoryItemAt(int index);
        Player();
        ~Player();
};
#endif
