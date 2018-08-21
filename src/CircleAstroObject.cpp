#include "CircleAstroObject.h"
#include <SFML/Graphics.hpp>
#include "AstroObject.h"
#include <SFML/System/Vector2.hpp>

using namespace astro;
using namespace circleAstroColors;

CircleAstroObject::CircleAstroObject (ASTRO_TYPE type, ASTRO_SIZE size, sf::Vector2f position) {
    this->circleShape = new sf::CircleShape(getSizeOfAstroSize(size)); // size, thickness and position
    this->circleShape->setPosition(position);
    this->circleShape->setOutlineThickness(getOutlineThicknessOfAstroSize(size));
    this->circleShape->setFillColor(getFillColorOfAstroType(type)); //colors
    this->circleShape->setOutlineColor(getOutsideColorOfAstroType(type));
    this->astroObject = new AstroObject(type, size);
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



ASTRO_TYPE CircleAstroObject::getAstroType() {
    return this->astroObject->getType();
}

ASTRO_SIZE CircleAstroObject::getAstroSize() {
    return this->astroObject->getSize();
}

sf::Vector2<float> CircleAstroObject::getPosition() {
    return this->circleShape->getPosition();
}

void CircleAstroObject::setAstroType(ASTRO_TYPE type) {
    this->astroObject->setType(type);
    this->setColor(type);
}

void CircleAstroObject::setAstroSize(ASTRO_SIZE size) {
    this->astroObject->setSize(size);
    this->setSize(size);
}

void CircleAstroObject::setPosition(sf::Vector2f position) {
    this->circleShape->setPosition(position);
}

void CircleAstroObject::setColor(ASTRO_TYPE type) {
    this->circleShape->setFillColor(getFillColorOfAstroType(type));
    this->circleShape->setOutlineColor(getFillColorOfAstroType(type));
}

void CircleAstroObject::setSize(ASTRO_SIZE size) {
    this->circleShape->setRadius(getSizeOfAstroSize(size));
}



