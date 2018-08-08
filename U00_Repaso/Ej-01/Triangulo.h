#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H

#include <cmath>
#include "Geometria.h"

class Triangulo : public Geometria{
protected:
    double angulo;

public:
    double getAngulo();
    double setAngulo(double angulo);

    float getPerimetro();
    float getSuperficie();
};


#endif //REPASO_TRIANGULO_H
