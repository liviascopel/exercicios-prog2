/*
Desafio de atravessar um galpão de acordo com 
um documento de instruções. O mapa do galpão é representado por uma matriz de M 
linhas e N colunas. Cada posição dessa matriz assume o valor 0 (livre) ou 1 
(bloqueado). O jogador só pode se movimentar por posições livres. No documento 
de instruções consta a posição inicial do jogador (linhai, Xj) e a posição final desejada (Xf, 
colunaf). Além disso, a instrução contém uma sequência de quatro caracteres que 
representa  a  prioridade  de  movimentação  do  jogador:  a(C)ima,  a(B)aixo,  (D)ireita, 
(E)squerda.  O  jogador  nunca  se  movimenta  pela  diagonal  e  nunca  pode  voltar 
para uma posição que ele já visitou.  
Faça  um  programa  que  leia  todas  essas  informações  e  movimente  o  jogador  pelo 
mapa procurando uma saída. Seu programa deve registrar todas as posições 
movimentadas até chegar a posição final, se for possível.

• Entrada:  Valores  M  e  N  definindo  a  quantidade  de  linhas  e  colunas  da  matriz, 
acompanhado  da  matriz  em  si.  Em  seguida,  será  informado  a  posição  inicial  do 
jogador  (Xi,  Xj)  e  a  posição  final  desejada  (Xf,  colunaf).  Por  último,  será  dado  uma 
sequência de quatro caracteres que representa a prioridade de movimentação do 
jogador. 
• Saída: Seu  programa  deve  retornar  todos  os pontos  visitados  até  a  saída,  se  for 
possível. Se não for possível, ele retorna até onde foi possível.
*/

#include <stdio.h>

int main() {
    int qtd_linhas, qtd_colunas;
    int linha_inicial, linha_final, coluna_inicial, coluna_final;
    int linha_jogador, coluna_jogador;
    char movimento1 = '\0', movimento2 = '\0', movimento3 = '\0', movimento4 = '\0';

    scanf("%d %d", &qtd_linhas, &qtd_colunas);

    int mapa[qtd_linhas][qtd_colunas];

    for (int i = 0; i < qtd_linhas; i++) {
        for (int j = 0; j < qtd_colunas; j++) {
                scanf("%d", &mapa[i][j]);
        }
    }

    // for (int i = 0; i < qtd_linhas; i++) {
    //     for (int j = 0; j < qtd_colunas; j++) {
    //         printf("%d ", mapa[i][j]);
    //     }
    //     printf("\n\n");
    // }

    scanf("%d %d", &linha_inicial, &coluna_inicial);

    scanf("%d %d", &linha_final, &coluna_final);

    linha_jogador = linha_inicial-1;
    coluna_jogador = coluna_inicial-1;

    linha_final--;
    coluna_final--;

    scanf("%*[^\n]"); // consome tudo até o \n
    scanf("%*c"); // consome o \n

    scanf("%c", &movimento1);
    scanf("%c", &movimento2);
    scanf("%c", &movimento3);
    scanf("%c", &movimento4);
    //printf("%c,%c,%c,%c\n", movimento1, movimento2, movimento3, movimento4);
    printf("(%d,%d) ", linha_jogador+1, coluna_jogador+1);


    while(!(linha_jogador == linha_final && coluna_jogador == coluna_final)) {
        if (movimento1 == 'B' && mapa[linha_jogador + 1][coluna_jogador] == 0 && linha_jogador + 1 < qtd_linhas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador++;
        } else if (movimento1 == 'C' && mapa[linha_jogador - 1][coluna_jogador] == 0 && linha_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador--;
        } else if (movimento1 == 'E' && mapa[linha_jogador][coluna_jogador - 1] == 0 && coluna_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador--;
        } else if (movimento1 == 'D' && mapa[linha_jogador][coluna_jogador + 1] == 0 && coluna_jogador + 1 < qtd_colunas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador++;
        }

        else if (movimento2 == 'B' && mapa[linha_jogador + 1][coluna_jogador] == 0 && linha_jogador + 1 < qtd_linhas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador++;
        } else if (movimento2 == 'C' && mapa[linha_jogador - 1][coluna_jogador] == 0 && linha_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador--;
        } else if (movimento2 == 'E' && mapa[linha_jogador][coluna_jogador - 1] == 0 && coluna_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador--;
        } else if (movimento2 == 'D' && mapa[linha_jogador][coluna_jogador + 1] == 0 && coluna_jogador + 1 < qtd_colunas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador++;
        }

        else if (movimento3 == 'B' && mapa[linha_jogador + 1][coluna_jogador] == 0 && linha_jogador + 1 < qtd_linhas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador++;
        } else if (movimento3 == 'C' && mapa[linha_jogador - 1][coluna_jogador] == 0 && linha_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador--;
        } else if (movimento3 == 'E' && mapa[linha_jogador][coluna_jogador - 1] == 0 && coluna_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador--;
        } else if (movimento3 == 'D' && mapa[linha_jogador][coluna_jogador + 1] == 0 && coluna_jogador + 1 < qtd_colunas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador++;
        }

        else if (movimento4 == 'B' && mapa[linha_jogador + 1][coluna_jogador] == 0 && linha_jogador + 1 < qtd_linhas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador++;
        } else if (movimento4 == 'C' && mapa[linha_jogador - 1][coluna_jogador] == 0 && linha_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            linha_jogador--;
        } else if (movimento4 == 'E' && mapa[linha_jogador][coluna_jogador - 1] == 0 && coluna_jogador - 1 >= 0) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador--;
        } else if (movimento4 == 'D' && mapa[linha_jogador][coluna_jogador + 1] == 0 && coluna_jogador + 1 < qtd_colunas) {
            mapa[linha_jogador][coluna_jogador] = 1;
            coluna_jogador++;
        }

        else {
            break;
        }

        printf("(%d,%d) ", linha_jogador+1, coluna_jogador+1);
    }

    return 0;
}