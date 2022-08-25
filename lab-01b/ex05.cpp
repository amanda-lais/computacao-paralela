//5. Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.

//auxilio de: https://www.programiz.com/cpp-programming/examples/matrix-transpose

#include <iostream>
using namespace std;

int main()
{
   int matriz[5][5], transposta[5][5], linha, coluna, i, j, opt, mult, aux;

   cout << "Digite as linhas da matriz (até 5): " << endl;
   cin >> linha;
   cout << "Digite as colunas da matriz (até 5): " << endl;
   cin >> coluna;
  

   cout << "\nDigite os Numeros da matriz: " << endl;

   
   for (int i = 0; i < linha; ++i) 
   {
      for (int j = 0; j < coluna; ++j) 
      {
         cout << "Entre com o elemento da posicao linha " << i + 1 <<" coluna " << j + 1 << " : ";
         cin >> matriz[i][j];
      }
   }

  
   cout << "\nSua matriz: " << endl;
   for (int i = 0; i < linha; ++i) 
   {
      for (int j = 0; j < coluna; ++j)
        {
         cout << " " << matriz[i][j];
         if (j == coluna - 1)
            cout << endl << endl;
        }
   }

  cout << "Se deseja multiplicar uma coluna digite 0, se deseja multiplicar uma linha digite outro numero." << endl;
  cin>> opt;

  if (opt == 0)
  {
    cout<<"Escolha uma coluna para fazer a multiplicação: "<<endl;
    cin >> aux;
    cout << "Digite o multiplicando: ";
    cin >> mult;

    for(i=0; i<=aux; i++)
    {
      matriz[i][j] = mult * matriz[i][j];
    }
    cout << "\nSua matriz: " << endl;
   for (int i = 0; i < linha; ++i) 
   {
      for (int j = 0; j < coluna; ++j)
        {
         cout << " " << matriz[i][j];
         if (j == coluna - 1)
            cout << endl << endl;
        }
   }
    
  }else{
    cout<<"Escolha uma linha para fazer a multiplicação: "<<endl;
    cin >> aux;
    cout << "Digite o multiplicando: ";
    cin >> mult;

    for(j=0; j<=aux; j++)
    {
      matriz[i][j] = mult * matriz[i][j];
    }
    cout << "\nSua matriz: " << endl;
   for (int i = 0; i < linha; ++i) 
   {
      for (int j = 0; j < coluna; ++j)
        {
         cout << " " << matriz[i][j];
         if (j == coluna - 1)
            cout << endl << endl;
        }
   }
    
    
  }
  
}
