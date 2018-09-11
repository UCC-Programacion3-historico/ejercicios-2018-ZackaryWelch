#include "Color.h"

int Color::getColor() {
    return (rojo<<16)|(verde<<8)|(azul);
}

void Color::tenirColor() {
    std::cout << 'R' << rojo << 'G' << verde << 'B' << azul << std::endl;
}
