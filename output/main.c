#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main()
{

    printf("Bem Vindo!");
    Circulo *circ = cria_cir(1.5, 0.7, 2.0);
    float x = area_cir(circ);
    printf("area do circulo %f", x);

    libera_cir(circ);

    return 0;
}