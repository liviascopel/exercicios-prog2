#include "circulo.h"
#include "ponto.h"
#include <stdlib.h>

struct circulo {
    tPonto c;
    float r;
};

tCirculo Circulo_Cria (float x, float y, float r) {
    tCirculo circulo = (tCirculo) malloc (sizeof(struct circulo));

    if (circulo == NULL) 
        return NULL;

    circulo->c = Pto_Cria(x, y);
    circulo->r = r;
    return circulo;
}

void Circulo_Apaga (tCirculo c) {
    Pto_Apaga(c->c);
    free(c);
}

tPonto Circulo_Acessa_Centro (tCirculo c) {
    return c->c;
}

float Circulo_Acessa_Raio (tCirculo c) {
    return c->r;
}

void Circulo_Atribui_Centro (tCirculo c, tPonto p) {
    c->c = p;
    // Pto_Atribui_x(c->c, Pto_Acessa_x(p));
    // Pto_Atribui_y(c->c, Pto_Acessa_y(p));
}

void Circulo_Atribui_Raio (tCirculo c, float r) {
    c->r = r;
}

int Circulo_Interior (tCirculo c, tPonto p) {
    float dist = Pto_Distancia(c->c, p);
    if (dist > c->r) 
        return 0;
    else
        return 1;
}