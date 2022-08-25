//6. Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.

#include <iostream>
using namespace std;

int main() {
   int matriz[5][5], transposta[5][5], linha, coluna, i, j;

   cout << "Digite as linhas da matriz (até 5): " << endl;
   cin >> linha;
   cout << "Digite as colunas da matriz (até 5): " << endl;
   cin >> coluna;
  

   cout << "\nDigite os Numeros da matriz: " << endl;

   
   for (int i = 0; i < linha; ++i) {
      for (int j = 0; j < coluna; ++j) {
         cout << "Entre com o elemento da posicao linha " << i + 1 <<" coluna " << j + 1 << " : ";
         cin >> matriz[i][j];
      }
   }

  
   cout << "\nSua matriz: " << endl;
   for (int i = 0; i < linha; ++i) {
      for (int j = 0; j < coluna; ++j) {
         cout << " " << matriz[i][j];
         if (j == coluna - 1)
            cout << endl << endl;
      }
   }

   
   for (int i = 0; i < linha; ++i)
      for (int j = 0; j < coluna; ++j) {
         transposta[j][i] = matriz[i][j];
      }

  
   cout << "\nTransposta: " << endl;
   for (int i = 0; i < coluna; ++i)
      for (int j = 0; j < linha; ++j) {
         cout << " " << transposta[i][j];
         if (j == linha - 1)
            cout << endl << endl;
      }

   return 0;
}