//7. Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.

//com auxilio de https://www.inf.pucrs.br/~pinho/LaproI/Structs/Structs.htm
#include <iostream>

using namespace std;

int main() {

     struct pessoas {

        char nome[20];
        int idade;
        float peso;
        float altura;

    };

    struct pessoas pessoa[3];

    for (int i=0; i<=2; i++)
    {
        cout <<"\nDigite seu nome: ";
        cin>>pessoa[i].nome;

       cout<<"\nDigite sua idade: ";
        cin>>pessoa[i].idade;
        
       cout<<"\nDigite seu peso: ";
        cin>>pessoa[i].peso;
       

       cout<<"\nDigite sua altura: ";
        cin>>pessoa[i].altura;
      
       
    }

    for (int i=0; i<=2; i++)
    {
      cout << pessoa[i].nome << ", idade: "<< pessoa[i].idade<< ", peso: " << pessoa[i].peso<< ", altura: " <<pessoa[i].altura<< endl;

    }
    
    return 0;
}