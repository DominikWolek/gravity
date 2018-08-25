//
// Created by wol on 8/22/18.
//

#ifndef GRAVITY_MOVEMENT_H
#define GRAVITY_MOVEMENT_H


#include <SFML/System.hpp>

class movement {
    sf::Vector2f(*movemantFunc)(float);
    float speed;
};


#endif //GRAVITY_MOVEMENT_H
