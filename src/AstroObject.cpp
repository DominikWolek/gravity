#include "AstroObject.h"

AstroObject::AstroObject(ASTRO_TYPE type, ASTRO_SIZE size /*= small*/, double xPosition /*= 0*/, double yPosition /*= 0*/) {
    this->type = planet;
    this->size = size;
    this->position = new double [DIMENSION_NUMBER];
    this->position[0] = xPosition;
    this->position[1] = yPosition;
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

void AstroObject::setType(ASTRO_TYPE type) {
    this->type = type;
}

void AstroObject::setSize(ASTRO_SIZE size) {
    this->size = size;
}

AstroObject::~AstroObject() {
    delete[] position;
}

double* AstroObject::getPosition() {
    auto *result = new double[DIMENSION_NUMBER];
    result[0] = this->getXPosition();
    result[1] = this->getYPosition();
    return result;
}

void AstroObject::setXPosition(double xPosition) {
    this->position[0] = xPosition;
}

void AstroObject::setYPosition(double yPosition) {
    this->position[1] = yPosition;
}

void AstroObject::setPosition(double *position) {
    this->setXPosition(position[0]);
    this->setYPosition(position[1]);
}

void AstroObject::setPosition(double xPosition, double yPosition) {
    this->setXPosition(xPosition);
    this->setYPosition(yPosition);
}

void AstroObject::setXPosition(int xPosition) {
    this->setXPosition(static_cast<double>(xPosition));
}

void AstroObject::setYPosition(int yPosition) {
    this->setYPosition(static_cast<double>(yPosition));
}

void AstroObject::setPosition(int *position) {
    this->setXPosition(static_cast<double> (position[0]));
    this->setYPosition(static_cast<double> (position[1]));
}

void AstroObject::setPosition(int xPostition, int yPosition) {
    this->setXPosition(static_cast<double> (xPostition));
    this->setYPosition(static_cast<double> (yPosition));
}









//void AstroObject::setPosition(int *position) {
//    this->setPosition(static_cast<double> (position[]))
//}
