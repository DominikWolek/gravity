#ifndef GRAVITY_ASTROOBJECT_H
#define GRAVITY_ASTROOBJECT_H

namespace astro {
    enum ASTRO_TYPE {planet, moon};
    enum ASTRO_SIZE {small, big};
    const int DIMENSION_NUMBER = 2;
}

using namespace astro;

class AstroObject {

public:
    explicit AstroObject (ASTRO_TYPE type = planet, ASTRO_SIZE size = small);

    ASTRO_TYPE getType();
    ASTRO_SIZE getSize();

    virtual void setType(ASTRO_TYPE type);
    virtual void setSize(ASTRO_SIZE size);

private:
    ASTRO_TYPE type;
    ASTRO_SIZE size;

};

#endif //GRAVITY_ASTROOBJECT_H
