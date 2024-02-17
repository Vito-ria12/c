#ifndef CIRCULO_H
#define CIRCULO_H
#include "ponto.h"

/*TAD circulo*/
typedef struct circulo Circulo;

/*cria o TAD circulo atraves de tres parametros*/
Circulo* cria_cir (float x, float y, float r);

/*libera */
void libera_cir (Circulo* c);

/*calcula a area do circulo*/
float area_cir (Circulo* c); 

/*verifica se um ponto pertence ao perimentro do circulo*/
int pertence_cir(Circulo* c, Ponto *p);

#endif