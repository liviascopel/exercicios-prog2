#include "tadgen.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct generic {
    Type tipo;
    int numElem;
    void *vetor;
};

tGeneric* CriaGenerico(Type type, int numElem) {
    tGeneric * g = (tGeneric*) malloc (sizeof(struct generic));
    g->tipo = type;
    g->numElem = numElem;
    int tam;
    if (type == 1)
        tam = sizeof(int);
    else if (type == 0)
        tam = sizeof(float);

    g->vetor = malloc (numElem * tam);

    return g;
}

void DestroiGenerico(tGeneric* gen) {
    free(gen->vetor);
    free(gen);
}

void LeGenerico(tGeneric* gen) {
    printf("\nDigite o vetor:\n");

    if(gen->tipo == 0){
        float fnum;
        for(int i = 0; i < gen->numElem; i++){
            void* ptr = gen->vetor + (i * sizeof(float));
            scanf("%f", &fnum);
            memcpy(ptr, &fnum, sizeof(float));
        }
    }
    else if(gen->tipo == 1){
        int inum;
        for(int i = 0; i < gen->numElem; i++){
            void* ptr = gen->vetor + (i * sizeof(int));
            scanf("%d", &inum);
            memcpy(ptr, &inum, sizeof(int));
        }
    }
}

void ImprimeGenerico(tGeneric* gen) {
    if(gen->tipo == 0){
        for(int i = 0; i < gen->numElem; i++){
            float fnum;
            void* ptr = gen->vetor +(i * sizeof(float));
            memcpy(&fnum, ptr, sizeof(float));
            printf("%.2f ", fnum);
        }
    }
    else if(gen->tipo == 1){
        for(int i = 0; i < gen->numElem; i++){
            int inum;
            void* ptr = gen->vetor +(i * sizeof(int));
            memcpy(&inum, ptr, sizeof(int));
            printf("%d ", inum);
        }
    }
}