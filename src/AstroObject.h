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
    explicit AstroObject (ASTRO_TYPE type = planet, ASTRO_SIZE size = small, double xPosition = 0, double yPosition = 0);

    virtual ~AstroObject();

    virtual double* getPosition();
    virtual double getXPosition();
    virtual double getYPosition();

    ASTRO_TYPE getType();
    ASTRO_SIZE getSize();

    virtual void setPosition(double* position);
    virtual void setPosition(int* position);

    void setPosition(double xPosition = 0, double yPosition = 0);
    void setPosition(int xPostition = 0, int yPosition = 0);

    void setXPosition(double xPosition = 0);
    void setXPosition(int xPosition = 0);

    void setYPosition(double yPosition = 0);
    void setYPosition(int yPosition = 0);

    void setType(ASTRO_TYPE type);
    void setSize(ASTRO_SIZE size);

private:
    double *position;
    ASTRO_TYPE type;
    ASTRO_SIZE size;
};

#endif //GRAVITY_ASTROOBJECT_H
