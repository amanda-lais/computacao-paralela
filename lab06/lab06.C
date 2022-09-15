#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include <math.h>
 
void *multiplicar(void* arg)
{
    int *data = (int *)arg;
    int k = 0, i = 0;
     
    int x = data[0];
    for (i = 1; i <= x; i++)
           k += data[i]*data[i+x];
     
    int *pointer = (int*)malloc(sizeof(int));
         *pointer = k;
    pthread_exit(pointer);
}
 
int main()
{
//variaveis

  int x=8,y=8,x1=8,y1=8,i,j,k;
//matriz

  int Matriz1[8][8];
  int Matriz2[8][8];
   
  // preencendo as matrizes com valores aleatorios
  for (i = 0; i < x; i++)
  {
    for (j = 0; j < y; j++)
    {
      Matriz1[i][j] = rand() % 10;
    }
  }    
  for (i = 0; i < x; i++)
  {
    for (j = 0; j < y; j++)
    {
      Matriz2[i][j] = rand() % 10;
    }           
  }
          
  
  // print matrizes       
  printf("Matriz1\n");  
  for (i = 0; i < x; i++)
  {
      for(j = 0; j < y; j++)
          printf("%d ",Matriz1[i][j]);
      printf("\n");
  }      
  printf("matriz2\n");  
  for (i = 0; i < x1; i++)
  {
      for(j = 0; j < y1; j++)
          printf("%d ",Matriz2[i][j]);
      printf("\n");   
  }
   
   
  int tamMax = x*y1;
   
   
  //array threads     
  pthread_t *threads;
  threads = (pthread_t*)malloc(tamMax*sizeof(pthread_t));
   
  int contador = 0;
  int* data = NULL;

  for (i = 0; i < x; i++)
      for (j = 0; j < y1; j++)
      {
              
          data = (int *)malloc((20)*sizeof(int));
          data[0] = y;
          //coluna e linha na variavel
          for (k = 0; k < y; k++)
              data[k+1] = Matriz1[i][k];
          //coluna e linha na variavel
          for (k = 0; k < x1; k++)
              data[k+y+1] = Matriz2[k][j];
            
           //criando thread da funcao de multiplicar
              pthread_create(&threads[contador++], NULL, multiplicar, (void*)(data));
        }
   
  printf("Matriz final:- \n");
  for (i = 0; i < tamMax; i++)
  {
    //função void multiplicar
    void *k;

    //soma das threads
    pthread_join(threads[i], &k);  
    //print das matrizes com thread
    int *pointer = (int *)k;
    printf("%d ",*pointer);
    
    if ((i + 1) % y1 == 0)
    printf("\n");
  }
  
return 0;
}
