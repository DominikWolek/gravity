#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "AstroObject.h"

#ifndef GRAVITY_CIRCLEASTROOBJECT_H

#define GRAVITY_CIRCLEASTROOBJECT_H

using namespace astro;

namespace circleAstroColors {
    const sf::Color PLANET_FILL_COLOR = {0, 0, 204}; // #0000cc
    const sf::Color PLANET_OUTSIDE_COLOR = {0, 0, 128}; //000080

    const sf::Color MOON_FILL_COLOR = {0, 204, 204}; // #00cccc
    const sf::Color MOON_OUTSIDE_COLOR = {0, 128, 128}; // #008080

    const sf::Color DEFAULT_FILL_COLOR = sf::Color::White; // it's white
    const sf::Color DEFAULT_OUTSIDE_COLOR = sf::Color::Black; // it's black
}

class CircleAstroObject {
public:
    CircleAstroObject (ASTRO_TYPE type = planet, ASTRO_SIZE size = small, sf::Vector2f position = sf::Vector2f(0, 0));

    ~CircleAstroObject();

    sf::CircleShape* getCircleShape();

    static sf::Color getFillColorOfAstroType (ASTRO_TYPE type);
    static sf::Color getOutsideColorOfAstroType(ASTRO_TYPE type);
    static int getSizeOfAstroSize (ASTRO_SIZE size);
    static int getOutlineThicknessOfAstroSize (ASTRO_SIZE size);

    sf::Vector2<float> getPosition();
    ASTRO_TYPE getAstroType();
    ASTRO_SIZE getAstroSize();

    void setPosition(sf::Vector2f position);
    void setAstroType(ASTRO_TYPE type);
    void setAstroSize(ASTRO_SIZE size);

private:
    void setColor(ASTRO_TYPE type);
    void setSize(ASTRO_SIZE size);

    sf::CircleShape *circleShape;
    AstroObject *astroObject;

};

#endif //GRAVITY_CIRCLEASTROOBJECT_H