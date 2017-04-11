#include "character.h"

void Character :: damage(int amount) {
    hitpoints -= amount;
}

bool Character :: isAlive() {
    return hitpoints > 0;
}
