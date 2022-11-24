#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

long double E1 = 0.0;
long double E2 = 0.0;

void * Taylor (void *arg)
{
  int *var = (int *)(arg);
  int T = 1000000;
  int i,j;
  double f = 1.0;
  
  if (*var == 1)
  {
    printf("thread1 :");
    printf("\n");
    for (i = 0; i<T/2; i++)
    {
      f = 1;
      for(j=1;j<=i;j++)
      {
        f = f*j;
      }
      E1 += 1.0/f;
    }
  }
  if (*var == 2)
  {
    printf("\n");
    printf("thread2: ");
    printf("\n");
    for (i= T/2; i< T; i++)
    {
      f = 1;
      for(j=i;j<=T;j++)
      {
        f = f*j;
      }
      E2 += 1.0/f;
    }
  }
  //printf(" E= %.100f", E);
}


int main(void) 
{
  //Taylor();
  int i = 0;
  pthread_t t1,t2;
  int a1 =1;
  int a2 =2;
  
  //long double **somaFinal;
  pthread_create(&t1, NULL, Taylor, (void *)(&a1));
  pthread_create(&t2, NULL, Taylor, (void *)(&a2));
  
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  
  printf(" E= %.60Lf", (E1+E2));
  
  return 0;
}
