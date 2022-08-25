#include <stdio.h>

//tam = 100
void removechar(char str[100], int pos, int tam){
    int i;
    int verif; //verifica se ja removeu ou nao
    for(i=0;i<tam;i++){
        if(verif == 1){
            str[i] = str[i+1];
        }
        if(verif == 0 & i == pos){
            str[i] = str[i+1];
            verif = 1;
        }
    }
    printf("testt: %s", str);
}

int main()
{
    char str[100] = "abcdfegh";
    removechar(str, 4, 100);
}
