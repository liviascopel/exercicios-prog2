/*
Em uma biblioteca, cada livro possui um identificador único que 
é representado por um número inteiro de 1 até N. Porém, se existir cópias deste livro, 
elas  possuem  o  mesmo  identificador.  É  sempre  desejável  ter  mais  de  uma  cópia  de 
cada  livro  para  que  várias  pessoas  possam  usufruir  do  mesmo.  Sendo  assim,  os 
funcionários  da  biblioteca  receberam  uma  lista  de  identificadores  de  livros  para 
identificar quais não possuem cópias para solicitar a compra de um novo exemplar. 
Sua função é criar um programa que identifique quais livros da lista não tem cópia e 
retorne para o funcionário solicitar a compra. 
 
Definição dos formatos de entrada e saída: 
• Entrada:  Um  número  N  que  representa  a  quantidade  de  livros  seguido  dos  N 
livros em si. 
• Saída: O identificador dos livros que não possuem cópia. 
*/

#include <stdio.h>

int main() {
    int qtd_livros, id, aux, flag = 0;

    scanf("%d", &qtd_livros);

    int livros[qtd_livros][2];

    for (int i = 0; i < qtd_livros; i++) {
        scanf("%d", &id);
        livros[i][0] = id;
        livros[i][1] = 1;
    }

    for (int i = 0; i < qtd_livros - 1; i++) {
        for (int j = 0; j < qtd_livros - i - 1; j++) {
            if (livros[j][0] > livros[j + 1][0]) {
                aux = livros[j][0];
                livros[j][0] = livros[j+1][0];
                livros[j+1][0] = aux;
            }
        }
    }

    for (int j = 0; j < qtd_livros; j++) {
        for (int k = j + 1; k < qtd_livros; k++) {
            if (livros[j][0] == livros[k][0]){
                livros[j][1] = 0;
                livros[k][1] = 0;
            }
        }
    }

    for (int i = 0; i < qtd_livros; i++) {
        if (livros[i][1] == 1) {
            printf("%d ", livros[i][0]);
            flag = 1;
        }
        
    }
    if (!flag)
            printf("NENHUM");

    return 0;
}