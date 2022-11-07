  GNU nano 6.2                                                                                                                                                                                                                                                                                              matrizMult.c                                                                                                                                                                                                                                                                                                        
#include <omp.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc , char * argv []){
  int N,M,P = 0;
  printf("digite os tamanhos: ");
  scanf("%d%d%d",&N,&M,&P);
  omp_lock_t lock;
  omp_init_lock(&lock);
  
  srand(time(NULL));
  int thread_count;
  thread_count = strtol ( argv [1] , NULL , 10);
  unsigned long i, j, k;
  int A[N][P];
  int B[P][M];
  int C[N][M];

  for (i = 0;i < N; i++)
    for (k = 0; k < P; k++)
      A[i][k] = rand()%10;
  for (k = 0;k < P; k++)
    for (j = 0; j < M; j++)
      B[k][j] = rand()%10;
  for (i = 0;i < N; i++)
    for (j = 0; j < M; j++)
      C[i][j] = 0;

  
  #pragma omp shared(A,B,C) private(i,j,k)
  #pragma omp parallel for num_threads(thread_count)
    for (i = 0; i < N; i++) {
      for (j = 0; j < M; j++) {
        for (k = 0; k < P; k++) {
          C[i][j] += A[i][k] * B[k][j];
        }
      }
    }
  
  //print matrizes       
  printf("A\n");  
  for (i = 0; i < N; i++)
  {
      for(j = 0; j < P; j++)
          printf("%d ",A[i][j]);
      printf("\n");
  }      
  printf("B\n");  
  for (i = 0; i < P; i++)
  {
      for(j = 0; j < M; j++)
          printf("%d ",B[i][j]);
      printf("\n");   
  }     
  printf("C\n");  
  for (i = 0; i < N; i++)
  {
      for(j = 0; j < M; j++)
          printf("%d ",C[i][j]);
      printf("\n");   
  }     
  
  return 0;
}









