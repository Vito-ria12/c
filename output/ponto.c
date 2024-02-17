#include "ponto.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*para guarda as coordernadas do ponto(x,y) usamos essa struct*/
struct ponto{
    float x;
    float y;
};

/*
A função pont_cria recebe dois valores x e y como parâmetros e retorna um ponteiro para um objeto do tipo 'Ponto'.
sizeof(Ponto): A função sizeof retorna o tamanho em bytes da struct Ponto.
malloc(sizeof(Ponto)): A função malloc aloca um bloco de memória do tamanho especificado
em bytes. Aqui, malloc(sizeof(Ponto)) aloca um bloco de memória do tamanho necessário para
armazenar uma variável do tipo Ponto. A função retorna um ponteiro genérico (void *) para o
início deste bloco de memória alocado.
(Ponto*): O tipo de retorno de malloc é void *, um ponteiro genérico. No entanto, é necessário
converter este ponteiro para o tipo correto antes de utilizá-lo. Neste caso, o código faz um cast
explícito para Ponto*, indicando que o ponteiro retornado por malloc deve ser tratado como um ponteiro para Ponto.
Ponto* p = ...: Por fim, o código atribui o ponteiro retornado por malloc à variável p, que agora aponta para o
início do bloco de memória alocado dinamicamente. Isso significa que p agora pode ser usado para acessar e manipular
o objeto Ponto recém-criado na memória.
Após a alocação é verificado se a alocação foi bem sucedida.
Se a alocação de memória foi bem-sucedida, as coordenadas x e y são atribuídas ao novo ponto criado,
acessando os campos x e y da estrutura 'Ponto' através do ponteiro p.
*/
Ponto* pont_cria(float x,float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p == NULL){
        printf("erro!");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
};

/*a funçao libera a memoria*/
void pont_libera(Ponto* p){
    free(p);
};

void pont_acessa(Ponto* p, float *x, float *y){
    *x = p->x;
    *y = p->y;
};


void pont_atribui(Ponto* p, float x,float y){
    p->x = x;
    p->y = y;
};


float pont_distancia(Ponto* p1, Ponto* p2){
    float dx = (p2->x) - (p1->x);
    float dy = (p2->y) - (p1->y);
    return sqrt((dx*dx) + (dy*dy));

};