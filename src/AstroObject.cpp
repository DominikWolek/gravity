#include "AstroObject.h"

AstroObject::AstroObject(ASTRO_TYPE type, ASTRO_SIZE size /*= small*/, double xPosition /*= 0*/, double yPosition /*= 0*/) {
    this->type = planet;
    this->size = size;
    this->position = new double [2];
    this->position[0] = xPosition;
    this->position[1] = yPosition;
}



void AstroObject::setPosition(double position []) {
    this->position[0] = position[0];
    this->position[1] = position[1];
}
void AstroObject::setPosition(const double x, const double y) {
    this->position[0] = x;
    this->position[1] = y;
}
void AstroObject::setPosition(const int x, const int y) {
    this->position[0] = x;
    this->position[1] = y;
}

void AstroObject::setType(ASTRO_TYPE type) {
    this->type = type;
}

void AstroObject::setSize(ASTRO_SIZE size) {
    this->size = size;
}

ASTRO_TYPE AstroObject::getType() {
    return this->type;
}

ASTRO_SIZE AstroObject::getSize() {
    return this->size;
}

double AstroObject::getXPosition() {
    return this->position[0];
}

double AstroObject::getYPosition() {
    return this->position[1];
}

AstroObject::~AstroObject() {
    delete[] position;
}
