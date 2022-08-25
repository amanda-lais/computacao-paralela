//1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

#include <stdio.h>

int menor(int i, int j, int ma[i][j]){
    int menor;
    int m;
    int n;
    menor = ma[0][0];
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            if (menor>ma[m][n]){
                menor = m;
            }
        }
    }
    printf("\nLinha com o menor valor: %d", menor);
    return menor;
}

int lervals(int i, int j, int ma[i][j]){
    printf("\nDigite os valores da matriz: \n");
    int m;
    int n;
    int mn;
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            scanf("%i", &ma[m][n]);
        }
    }
    printf("\nMATRIZ:\n");
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            printf("%d ", ma[m][n]);
        }
        printf("\n");
    }
    mn = menor(i, j, ma);
    return ma[i][j];
}

int main()
{
    int tam;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%i", &tam);
    int mquad[tam][tam];
    int y;
    y = lervals(tam, tam, mquad);
    return 0;
}
