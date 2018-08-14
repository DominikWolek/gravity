#ifndef GRAVITY_ASTROOBJECT_H
#define GRAVITY_ASTROOBJECT_H

enum astroType {planet, moon};
enum astroSize {small, big};

class AstroObject {

public:
    AstroObject (astroType type = planet, astroSize size = small, double xPosition = 0, double yPosition = 0);

    void setPosition(double position []);
    void setPosition(double x = 0, double y = 0);
    void setPosition(int x = 0, int y = 0);

    void setType(astroType type);

    void setSize(astroSize size);

    double getXPosition();

    double getYPosition();

    astroType getType();

    astroSize getSize();



private:

    double* position;
    astroType type;
    astroSize sizeOf;
};

#endif //GRAVITY_ASTROOBJECT_H
