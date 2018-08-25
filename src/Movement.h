//
// Created by wol on 8/22/18.
//

#ifndef GRAVITY_MOVEMENT_H
#define GRAVITY_MOVEMENT_H


#include <SFML/System.hpp>

class Movement {
public:
    virtual sf::Vector2f movementFunc(float deltaTime) = 0;
};

#endif //GRAVITY_MOVEMENT_H
