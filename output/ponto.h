#ifndef PONTO_H
#define PONTP_H
/*observe que nas funções temos vezes ponteiros e vezes variaves.
Quando vamos acessar valores, apenas leituras, usamos variavies e para 
fazer atribuições ou modificações usamos ponteiros, lembre-se da passagem por referencia*/

typedef struct ponto Ponto; /*estrutura do TAD */

/*função para alocar os pontos e retornar as coordenadas (x,y)*/
Ponto* pont_cria(float x,float y);

/*função para liberar os pontos*/
void pont_libera(Ponto* p);

/*função para acessar os pontos*/
void pont_acessa(Ponto* p, float *x, float *y);

/*função para atribuir novas coordenadas aos pontos*/
void pont_atribui(Ponto* p, float x,float y);

/*função para medir a distancia entre os pontos*/
float pont_distancia(Ponto* p1, Ponto* p2);

#endif