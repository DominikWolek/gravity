#ifndef GRAVITY_ASTROOBJECT_H
#define GRAVITY_ASTROOBJECT_H


enum ASTRO_TYPE {planet, moon};
enum ASTRO_SIZE {small, big};

class AstroObject {

public:
    AstroObject (ASTRO_TYPE type = planet, ASTRO_SIZE size = small, double xPosition = 0, double yPosition = 0);
    ~AstroObject();

    void setPosition(double position []);
    void setPosition(const double x = 0, const double y = 0);
    void setPosition(const int x = 0, const int y = 0);

    void setType(ASTRO_TYPE type);

    void setSize(ASTRO_SIZE size);

    double getXPosition();

    double getYPosition();

    ASTRO_TYPE getType();

    ASTRO_SIZE getSize();



private:
    double* position;
    ASTRO_TYPE type;
    ASTRO_SIZE size;
};

#endif //GRAVITY_ASTROOBJECT_H
