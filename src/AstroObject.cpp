#include "AstroObject.h"

AstroObject::AstroObject(astroType type = planet, astroSize size = small, double xPosition = 0, double yPosition = 0) {
    this->typeOf = planet;
    this->sizeOf = sizeOf;
    this->position[0] = xPosition;
    this->position[1] = yPosition;
}

void AstroObject::setPosition(double position []) {
    this->position[0] = position[0];
    this->position[1] = position[1];
}
void AstroObject::setPosition(double x = 0, double y = 0) {
    this->position[0] = x;
    this->position[1] = y;
}
void AstroObject::setPosition(int x = 0, int y = 0) {
    this->position[0] = x;
    this->position[1] = y;
}

void AstroObject::setType(astroType type) {
    this->type = type;
}

void AstroObject::setSize(astroSize size) {
    this->size = size;
}

double AstroObject::getXposition() {
    return this->position[0];
}

double AstroObject::getYposition() {
    return this->position[1];
}

astroType AstroObject::getType() {
    return this->type;
}

astroSize AstroObject::getSize() {
    return this->type;
}
