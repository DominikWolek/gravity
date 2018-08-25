//
// Created by wol on 8/24/18.
//

#include "CircleMovement.h"
#include <cmath>
#include <stdio.h>

sf::Vector2f CircleMovement::movementFunc(float deltaTime) {
    sf::Vector2f result;
    double plusAngle = deltaTime * this->getSpeed();
    this->setCurrentAngle(this->getCurrentAngle() + plusAngle);
    result.y = static_cast<float>(sin(this->getCurrentAngle())  * this->getRadius()) + this->getCenter().y;
    result.x = static_cast<float>(cos(this->getCurrentAngle())  * this->getRadius()) + this->getCenter().x;
    return result;
}

CircleMovement::CircleMovement(sf::Vector2f center, sf::Vector2f currentPosition, double speed) {
    this->setCenter(center);
    this->setSpeed(speed);
    this->setRadius(currentPosition, center);
    this->setCurrentAngle(currentPosition, center);
}


void CircleMovement::setSpeed(double speed) {
    this->speed = speed;
}

double CircleMovement::getSpeed() {
    return this->speed;
}

void CircleMovement::setRadius(double radius) {
    this->radius = radius;
}

void CircleMovement::setCurrentAngle(double angle) {
    this->currentAngle = angle;
}

void CircleMovement::setCenter(sf::Vector2f center) {
    this->center = center;
}

double CircleMovement::getRadius() {
    return this->radius;
}

double CircleMovement::getCurrentAngle() {
    return this->currentAngle;
}

sf::Vector2f CircleMovement::getCenter() {
    return this->center;
}

void CircleMovement::setRadius(sf::Vector2f currentPosition, sf::Vector2f center) {
    this->radius = sqrt(pow(center.x - currentPosition.x, 2) + pow(center.y - currentPosition.y, 2));
}

void CircleMovement::setCurrentAngle(sf::Vector2f currentPosition, sf::Vector2f center) {
    this->currentAngle = acos((currentPosition.y - center.y)/ radius);
}
