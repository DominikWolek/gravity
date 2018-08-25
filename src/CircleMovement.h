//
// Created by wol on 8/24/18.
//
#include "Movement.h"

#ifndef GRAVITY_CIRCLEMOVEMENT_H
#define GRAVITY_CIRCLEMOVEMENT_H


class CircleMovement : public Movement {
public:
    CircleMovement(sf::Vector2f center, sf::Vector2f currentPosition, double speed = 1);
    sf::Vector2f movementFunc(float deltaTime) override;
    void setRadius(double radius);
    void setRadius(sf::Vector2f currentPosition, sf::Vector2f center);
    void setSpeed(double speed);
    void setCurrentAngle(double angle);
    void setCurrentAngle(sf::Vector2f currentPosition, sf::Vector2f center);
    void setCenter(sf::Vector2f center);

    double getRadius();
    double getSpeed();
    double getCurrentAngle();
    sf::Vector2f getCenter();
private:
    sf::Vector2f center;
    double radius;
    double speed;
    double currentAngle;
};


#endif //GRAVITY_CIRCLEMOVEMENT_H
