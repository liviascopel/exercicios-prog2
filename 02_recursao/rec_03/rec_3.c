/*
Problema: Implemente uma função, utilizando o conceito de recursão, que 
receba um vetor, sua quantidade e o número a ser procurado, e retorne a quantidade 
de vezes que o número procurado aparece no vetor.  
Cabeçalho: int ContaOcorrencias(int* vet, int numElementos, int numeroProcurado);  
Utilizando  a  função  anterior,  faça  um  programa  para  testar  a  função.  O  programa 
deverá  ler  um  número  de  casos  de  testes  e  processar  cada  caso.  Cada  caso  será 
composto  de  um  número  a  ser  procurado  e  um  vetor  dado  por  sua  quantidade  de 
elementos  e  seus  elementos  em  si.  O  programa  deverá  imprimir  a  quantidade  de 
vezes que o número aparece no vetor para cada caso de teste. 
 
Definição dos formatos de entrada e saída: 
• Entrada:  um  número  N  representando  a quantidade  de  casos  a  serem  testados, 
seguido de N casos formados por: um número a ser procurado X, uma quantidade 
QTD de elementos do vetor VET seguida de QTD elementos inteiros. 
• Saída: o número de vezes que X aparece no vetor VET de cada caso
*/

#include <stdio.h>

int ContaOcorrencias(int* vet, int numElementos, int numeroProcurado);

int main () {
    int qtdCasos, numeroProcurado, conta, qtdElementos;

    scanf("%d", &qtdCasos);

    for (int i = 0; i < qtdCasos; i++) {
        scanf("%d", &numeroProcurado);
        scanf("%d", &qtdElementos);

        int vet[qtdElementos];

        for (int j = 0; j < qtdElementos; j++) {
            scanf("%d", &vet[j]);
        }
        conta = ContaOcorrencias(vet, qtdElementos, numeroProcurado);
        printf("%d\n", conta);
    }

    return 0;
}

int ContaOcorrencias(int* vet, int numElementos, int numeroProcurado) {
    if (numElementos == 0) {
        return 0;
    } if (vet[numElementos - 1]  == numeroProcurado) {
        return 1 + ContaOcorrencias(vet, numElementos - 1, numeroProcurado);
    } else
        return ContaOcorrencias(vet, numElementos - 1, numeroProcurado);
}