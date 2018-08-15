#include <SFML/Graphics.hpp>
#include "AstroObject.h"

#ifndef GRAVITY_CIRCLEASTROOBJECT_H

#define GRAVITY_CIRCLEASTROOBJECT_H

using namespace astro;

namespace circleAstroColors {
    const sf::Color PLANET_FILL_COLOR = {0, 0, 204}; // #0000cc
    const sf::Color PLANET_OUTSIDE_COLOR = {0, 0, 128};

    const sf::Color MOON_FILL_COLOR = {0, 204, 204}; // #000080
    const sf::Color MOON_OUTSIDE_COLOR = {0, 128, 128}; // #008080

    const sf::Color DEFAULT_FILL_COLOR = sf::Color::White; // it's white
    const sf::Color DEFAULT_OUTSIDE_COLOR = sf::Color::Black; // it's black
}

class CircleAstroObject : AstroObject {
public:
    explicit CircleAstroObject (ASTRO_TYPE type = planet, ASTRO_SIZE size = small, double xPosition = 0, double yPosition = 0);

    ~CircleAstroObject();

    sf::CircleShape* getCircleShape();

    static sf::Color getFillColorOfAstroType (ASTRO_TYPE type);

    static sf::Color getOutsideColorOfAstroType(ASTRO_TYPE type);
    static int getSizeOfAstroSize (ASTRO_SIZE size);
    static int getOutlineThicknessOfAstroSize (ASTRO_SIZE size);

    double* getPosition() override;
    double getXPosition() override;
    double getYPosition() override;

    void setPosition(double* cords) override;
    void setXPosition(double xPosition);
    void setYPosition(double yPosition);

    void doCircle(double center, double radius);


private:
    sf::CircleShape *circleShape;
};

#endif //GRAVITY_CIRCLEASTROOBJECT_H