#include "CircleAstroObject.h"
#include <SFML/Graphics.hpp>
#include "AstroObject.h"

using namespace astro;
using namespace circleAstroColors;

CircleAstroObject::CircleAstroObject (ASTRO_TYPE type, ASTRO_SIZE size, double xPosition, double yPosition) {
    this->circleShape = new sf::CircleShape(getSizeOfAstroSize(size)); // size, thickness and position
    this->circleShape->setPosition(xPosition, yPosition);
    this->circleShape->setOutlineThickness(getOutlineThicknessOfAstroSize(size));

    this->circleShape->setFillColor(getFillColorOfAstroType(type)); //colors
    this->circleShape->setOutlineColor(getOutsideColorOfAstroType(type));
}

void CircleAstroObject::doCircle(double center, double radius) {
    // std::cout << I'd rather not << std::endl;
}

sf::CircleShape* CircleAstroObject::getCircleShape() {
    return this->circleShape;
}

CircleAstroObject::~CircleAstroObject() {
    delete this->circleShape;
}

sf::Color CircleAstroObject::getFillColorOfAstroType(ASTRO_TYPE type) {
    if (type == planet) {
        return PLANET_FILL_COLOR;
    } else if (type == moon) {
        return MOON_FILL_COLOR;
    } else {
        return DEFAULT_FILL_COLOR;
    }
}

sf::Color CircleAstroObject::getOutsideColorOfAstroType(ASTRO_TYPE type) {
    if (type == planet) {
        return PLANET_OUTSIDE_COLOR;
    } else if (type == moon) {
        return MOON_OUTSIDE_COLOR;
    } else {
        return DEFAULT_OUTSIDE_COLOR;
    }
}

int CircleAstroObject::getSizeOfAstroSize(ASTRO_SIZE size) {
    if (size == big) {
        return 240;
    } else if (size == small) {
        return 40;
    } else {
        return 50;
    }
}

int CircleAstroObject::getOutlineThicknessOfAstroSize(ASTRO_SIZE size) {
    if (size == big) {
        return 10;
    } else if (size == small) {
        return 5;
    } else {
        return 0;
    }
}

 double* CircleAstroObject::getPosition() {
    return AstroObject::getPosition();
}

double CircleAstroObject::getXPosition() {
    return AstroObject::getXPosition();
}

double CircleAstroObject::getYPosition() {
    return AstroObject::getYPosition();
}

void CircleAstroObject::setPosition(double *cords) {
    AstroObject::setPosition(cords);
}
