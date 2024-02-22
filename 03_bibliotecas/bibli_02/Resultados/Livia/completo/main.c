#include <stdio.h>
#include "matrix_utils.h"

int main () {
    int rows1, rows2, cols1, cols2;
    int opcao;

    // matriz 1
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];

    matrix_read(rows1, cols1, matrix1);

    // matriz 2
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];

    matrix_read(rows2, cols2, matrix2);

    do
    {
        printf("1 - Somar matrizes\n");
        printf("2 - Subtrair matrizes\n");
        printf("3 - Multiplicar matrizes\n");
        printf("4 - Multiplicacao de uma matriz por escalar\n");
        printf("5 - Transposta de uma matriz\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida: \n");
        scanf("%d", &opcao);
        if (opcao != 6) {
            if (opcao == 1) {
                int result[rows1][cols1];
                if (possible_matrix_sum(rows1, cols1, rows2, cols2)) {
                    matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols1, result);
                } else {
                    printf("Erro: as dimensoes da matriz nao correspondem\n\n");
                }
            }
            else if (opcao == 2) {
                int result[rows1][cols1];
                if (possible_matrix_sub(rows1, cols1, rows2, cols2)) {
                    matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols1, result);
                } else {
                    printf("Erro: as dimensoes da matriz nao correspondem\n\n");
                }
            }
            else if (opcao == 3) {
                int result[rows1][cols2];
                if (possible_matrix_multiply(cols1, rows2)) {
                    matrix_multiply(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols2, result);
                } else {
                    printf("Erro: o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz\n\n");
                }
            }
            else if (opcao == 4) {
                int escalar, mat_escolhida;
                scanf("%d", &escalar);

                scanf("%d", &mat_escolhida);
                if (mat_escolhida == 1) {
                    scalar_multiply(rows1, cols1, matrix1, escalar);
                    matrix_print(rows1, cols1, matrix1);
                } else if (mat_escolhida == 2) {
                    scalar_multiply(rows2, cols2, matrix2, escalar);
                    matrix_print(rows2, cols2, matrix2);
                }
            }
            else if (opcao == 5) {
                int result1[cols1][rows1];
                int result2[cols2][rows2];
                transpose_matrix(rows1, cols1, matrix1, result1);
                transpose_matrix(rows2, cols2, matrix2, result2);
                matrix_print(cols1, rows1, result1);
                matrix_print(cols2, rows2, result2);
            }

        }
    } while (opcao != 6);
    

    return 0;
}