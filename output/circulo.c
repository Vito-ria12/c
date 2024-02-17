#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"
#define PI 3.14159

struct circulo{
    Ponto* p; /*ocorre a dependencia modular entre o arquivo ponto.h e circulo.h*/
    float r;
};

/*cria tipo abastrato de dado, circulo, atraves de tres parametros e dois deles sera exportados do modulo ponto.h*/
Circulo* cria_cir (float x, float y, float r){
    Circulo* c = (Circulo*) malloc(sizeof(Circulo ));
    c->p = pont_cria(x,y);
    c->r = r;
    return c;
}

/*libera a struct circulo*/
void libera_cir (Circulo* c){
    pont_libera(c->p);
    free(c);
}

/*calcula a area do circulo*/
float area_cir (Circulo* c){
    return PI*c->r*c->r;
}

/*verifica se um ponto pertence ao perimentro do circulo*/
int pertence_cir(Circulo* c, Ponto *p){
    float d;
    d = pont_distancia(c->p,p);
    return (d < c->r);
}
