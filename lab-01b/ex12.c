//12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.

#include <stdio.h>

//c = caracter desejado
int charpos(char str[], char c, int tam){
    int i;
    for(i=0;i<tam;i++){
        if(str[i] == c){
            printf("Caracter foi encontrado. Posicao %d.", i);
            return i;
        }
    }
    printf("Caracter nao foi encontrado.");
    return -1;
}

int main()
{
    int tam;
    char c;
    tam = 5;
    char str[5] = "abcde";
    printf("Digite o caracter desejado: ");
    scanf(" %c", &c);
    int teste;
    teste = charpos(str, c, tam);
    return 0;
}
