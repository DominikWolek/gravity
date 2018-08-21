#include "src/AstroObject.h"
#include <cassert>
#include <cstdio>

int main() {
    auto *astroObject = new AstroObject();

    assert(astroObject->getSize() == small);
    assert(astroObject->getType() == planet);

    ASTRO_TYPE type = planet;
    ASTRO_SIZE size = small;
    printf("first assertion passed \n");

    for (int i = 0; i < 16; ++i) {
        if (i % 3 != 1) {
            if(i % 2 == 1) {
                type = planet;
            } else {
                type = moon;
            }

            if(i > 8) {
                size = big;
            } else {
                size = small;
            }

            astroObject->setSize(size);
            astroObject->setType(type);
        }

        assert(astroObject->getType() == type);
        assert(astroObject->getSize() == size);
        printf("%d. assertion passed\n", i + 2);
    }

    delete astroObject;

    return 0;
}

