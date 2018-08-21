#include "AstroObject.h"

AstroObject::AstroObject(ASTRO_TYPE type, ASTRO_SIZE size) {
    this->type = type;
    this->size = size;
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
