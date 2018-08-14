#include <SFML/Graphics.hpp>
#include "src/AstroObject.h"
#include <iostream>

using namespace astro;

int main() {

    auto *earth = new AstroObject();

    delete earth;

    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            auto *astroObject = new AstroObject(planet, small, i, j);
            std::cout << astroObject->getXPosition() << " "
                    << astroObject->getYPosition() << " "
                    << astroObject->getSize() << " "
                    << astroObject->getType() << " " << std::endl;
            delete astroObject;
        }
    }

    std::cout << "\n\n\n" << std::endl;

    for (int k = 0; k < 4; ++k) {
        ASTRO_SIZE size;
        ASTRO_TYPE type;

        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (i > 0 && i < 50) {
                    size = big;
                } else {
                    size = small;
                }
                if (i > 25 && i < 75) {
                    type = moon;
                } else {
                    type = planet;
                }
                auto *astroObject = new AstroObject(type, size, i, j);
                std::cout << astroObject->getXPosition() << " "
                          << astroObject->getYPosition() << " "
                          << astroObject->getSize() << " "
                          << astroObject->getType() << "   ";
                if (j % 10 == 9) {
                    std::cout << std::endl;
                }
                delete astroObject;
            }
        }
    }

    std::cout << "\n\n\n" << std::endl;

    for (int k = 0; k < 4; ++k) {
        ASTRO_SIZE size;
        ASTRO_TYPE type;

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (i > 0 && i < 50) {
                    size = big;
                } else {
                    size = small;
                }
                if (i > 25 && i < 75) {
                    type = moon;
                } else {
                    type = planet;
                }
                auto *astroObject = new AstroObject(type, size, i, j);
                std::cout << "(" <<  astroObject->getXPosition() << ", " << astroObject->getYPosition() << ") ";
                if (j % 4 == 0) {
                    astroObject->setPosition(0, i);
                    std::cout << "[" <<  astroObject->getXPosition() << ", " << astroObject->getYPosition() << "]  | ";

                } else if (j % 4 == 1) {
                    astroObject->setPosition(j, 0);
                    std::cout << "[" <<  astroObject->getXPosition() << ", " << astroObject->getYPosition() << "]  | ";

                } else if (j % 4 == 2) {
                    astroObject->setPosition(j, i);
                    std::cout << "[" <<  astroObject->getXPosition() << ", " << astroObject->getYPosition() << "] | ";

                } else {
                    std::cout << " || ";
                }

                if (j % 8 == 7) {
                    std::cout << std::endl;
                }
                delete astroObject;
            }
        }
    }

    return 0;
}
