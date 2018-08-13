#include <SFML/Graphics.hpp>

int main() {

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape circle(200.f, 60);
    circle.setFillColor(sf::Color::Black);
    circle.setOutlineColor(sf::Color::White);
    circle.setOutlineThickness(10);
    circle.setPosition(200, 200);

    while (window.isOpen()) {

        sf::Event event;

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}
