#include <stdio.h>
#include "ponto.h"
#include "circulo.h"

int main () {
    float x1, x2, y1, y2, r;

    scanf("%f %f %f %f %f", &x1, &y1, &r, &x2, &y2);

    tCirculo c = Circulo_Cria(x1, y1, r);
    tPonto p = Pto_Cria(x2, y2);

    printf("%d", Circulo_Interior(c, p));

    Pto_Apaga(p);
    Circulo_Apaga(c);

    return 0;
}