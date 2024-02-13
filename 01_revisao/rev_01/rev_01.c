/*
Entrada: As coordenadas X e Y do alvo e seu raio R. Em seguida, as coordenadas e 
o raio do disparo.

Saída: Seu programa deverá informar se o tirou acertou o alvo. (ACERTOU Ou ERROU)
*/
#include <stdio.h>

int main() {
    float x_alvo, y_alvo, raio_alvo;
    float x_disparo, y_disparo, raio_disparo;
    float distancia_entre_centros;

    scanf("%f %f %f", &x_alvo, &y_alvo, &raio_alvo);
    scanf("%f %f %f", &x_disparo, &y_disparo, &raio_disparo);

    distancia_entre_centros = sqrt( pow(2, x_alvo - x_disparo)  +  pow(2, y_alvo - y_disparo));

    if (distancia_entre_centros < (raio_alvo - raio_disparo)) {
        printf("ACERTOU");
    } else {
        printf("ERROU");
    }
    return 0;
}