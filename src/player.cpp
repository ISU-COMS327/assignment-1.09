#include "player.h"

int Player :: getSpeed() {
    int my_speed = speed;
    for (int i = 0; i < equipment.size(); i++) {
        Object * object = equipment[i];
        if (object) {
            my_speed += object->speed_bonus;
        }
    }
    return my_speed;
}

int Player :: getAttackDamage() {
    int damage = attack_damage->roll();
    for (int i = 0; i < equipment.size(); i++) {
        Object * object = equipment[i];
        if (object) {
            damage += object->damage_bonus->roll();
        }
    }
    return damage;
}

bool Player :: canPickUpObject() {
    return inventory.size() < MAX_INVENTORY_SIZE;
}

void Player :: addObjectToInventory (Object * object) {
    inventory.push_back(object);
}

string Player :: viewInventoryObjectAt(int index) {
    return inventory[index]->description;
}

int Player :: getNumberOfItemsInInventory() {
    return inventory.size();
}

Player :: Player() {
    attack_damage = new Numeric("0+1d4");
    speed = 10;
    hitpoints = 500;
    for (int i = 0; i < 12; i++) {
        equipment.push_back(NULL);
    }
}

Player :: ~Player() {
    inventory.clear();
}
