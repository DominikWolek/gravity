#include <SFML/Graphics.hpp>
#include "src/CircleAstroObject.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Circle objects works!");


    auto *earth = new CircleAstroObject();

    while (window.isOpen()) {

        sf::Event event;

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(*(earth->getCircleShape()));
        window.display();
    }

    return 0;
}
