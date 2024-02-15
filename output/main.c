#include <stdio.h>
#include "funcoes.h"

int main(){
    Ponto* p= pont_cria(2.0, 1.0);
    Ponto* q= pont_cria(3.4, 2.1);

    float d = pont_distancia(p, q);

    printf("Distancia entre posntos %f \n", d);

    pont_libera(p);
    pont_libera(q);

    return 0;
}