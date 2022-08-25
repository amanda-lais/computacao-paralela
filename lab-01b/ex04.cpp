//4. Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char nome1[100], nome2[100];
    cout<< "digite primeiro nome ";
    cin >> (nome1);
    cout << "digite segundo nome: ";
    cin >> (nome2);
  
    if(strcmp(nome1, nome2)<0)
        printf("em ordem alfabetica:\n %s.\n %s.\n", nome1,nome2);
    else
        printf("em ordem alfabetica:\n %s.\n %s.\n", nome2,nome1);}