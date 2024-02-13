/*
Entrada: As coordenadas X e Y do alvo e seu raio R. Em seguida, as coordenadas e 
o raio do disparo.

Saída: Seu programa deverá informar se o tirou acertou o alvo. (ACERTOU Ou ERROU)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x_alvo, y_alvo, raio_alvo;
    float x_disparo, y_disparo, raio_disparo;
    float distancia_entre_centros;

    scanf("%f %f %f", &x_alvo, &y_alvo, &raio_alvo);
    scanf("%f %f %f", &x_disparo, &y_disparo, &raio_disparo);
    
    if (x_alvo > x_disparo) {
        if (y_alvo > y_disparo) {
            distancia_entre_centros = sqrt( pow(x_alvo - x_disparo, 2)  +  pow(y_alvo - y_disparo, 2));
        } else {
            distancia_entre_centros = sqrt( pow(x_alvo - x_disparo, 2)  +  pow(y_disparo - y_alvo, 2));
        }
    } else {
        if (y_alvo > y_disparo) {
            distancia_entre_centros = sqrt( pow(x_disparo - x_alvo, 2)  +  pow(y_alvo - y_disparo, 2));
        } else {
            distancia_entre_centros = sqrt( pow(x_disparo - x_alvo, 2)  +  pow(y_disparo - y_alvo, 2));
        }
    }

    if (distancia_entre_centros <= (raio_alvo + raio_disparo)) {
        printf("ACERTOU");
    } else {
        printf("ERROU");
    }
    return 0;
}