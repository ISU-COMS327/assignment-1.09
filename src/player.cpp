#include "player.h"

int Player :: getSpeed() {
    // TODO update to use equipment
    return speed;
}

int Player :: getAttackDamage() {
    // TODO update to use equipment
    return attack_damage->roll();
}

Player :: Player() {
    attack_damage = new Numeric("0+1d4");
    speed = 10;
}

Player :: ~Player() {
    inventory.clear();
}
