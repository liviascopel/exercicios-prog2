/*
Problema: Implemente uma função, utilizando o conceito de recursão, que 
receba um vetor e sua quantidade e retorne a soma dos elementos que são pares. 
Cabeçalho: int SomaElementosPares(int* vet, int numElementos); 
Utilizando  a  função  anterior,  faça  um  programa  para  testar  a  função.  O  programa 
deverá  ler  um  número  de  casos  de  testes  e  processar  cada  caso.  Cada  caso  será 
composto de um vetor dado por sua quantidade de elementos e seus elementos em 
si. O programa deverá imprimir a soma dos elementos pares de cada caso de teste. 
 
Definição dos formatos de entrada e saída: 
• Entrada:  um  número  N  representando  a  quantidade  de  vetores  a  serem  lidos, 
seguidos  dos  vetores  em  si.  Cada  vetor  é  representado  por  sua  quantidade  de 
elementos QTD seguida de seus elementos inteiros. 
• Saída: o resultado da soma dos pares de cada vetor. 
 
Ver exemplos de formato de entrada e saída nos arquivos fornecidos com a questão. 
*/

#include <stdio.h>

int SomaElementosPares(int* vet, int numElementos);

int main () {
    int numElementos, soma, qtdVetores;

    scanf("%d", &qtdVetores);

    for (int i = 0; i < qtdVetores; i++) {
        scanf("%d", &numElementos);
        int vet[numElementos];

        for(int i = 0; i < numElementos; i++) {
            scanf("%d", &vet[i]);
        }

        soma = SomaElementosPares(vet, numElementos);

        printf("%d\n", soma);
    }

    

    return 0;
}

int SomaElementosPares(int* vet, int numElementos) {
    if (numElementos == 0) {
        return 0;
    } if (vet[numElementos - 1] % 2 == 0)
        return vet[numElementos - 1] + SomaElementosPares(vet, numElementos - 1);
    else
        return SomaElementosPares(vet, numElementos - 1);
}