#include <SFML/Graphics.hpp>
#include "src/CircleAstroObject.h"
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>

int main() {

    const int WINDOW_LENGTH = 1920;
    const int WINDOW_HEIGTH = 1080;

    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Woooow!");

    auto *earth = new CircleAstroObject(planet, big, {300, 300});
    auto *themoon = new CircleAstroObject(moon, tiny, {150, 150});
    themoon->doCircle(earth->getCenterPosition());

    auto *clock = new sf::Clock();
    sf::Time timeElapsed;
    while (window.isOpen()) {

        sf::Event event;

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();

        }

        timeElapsed = clock->restart();
        themoon->update(timeElapsed.asSeconds());

        window.clear();
        window.draw(*(earth->getCircleShape()));
        window.draw(*(themoon->getCircleShape()));
        window.display();
    }

    delete earth;
    delete themoon;
    delete clock;

    return 0;
}
