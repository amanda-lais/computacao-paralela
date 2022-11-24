#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * Taylor (void *arg)
{
  int *var = (int *)(arg);
  int T = 100000;
  int i,j;
  double f = 1.0;
  double E = 0.0;
  
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
      E += 1.0/f;
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
      E += 1.0/f;
    }
  }
  printf(" E= %.100f", E);
}


int main(void) 
{
  //Taylor();
  int i = 0;
  pthread_t t1,t2,t3;
  int a1 =1;
  int a2 =2;
  //int a3 =3;
  //long double **somaFinal;
  pthread_create(&t1, NULL, Taylor, (void *)(&a1));
  pthread_create(&t2, NULL, Taylor, (void *)(&a2));
  pthread_create(&t3, NULL, Taylor,NULL);
  
  
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  //pthread_join(t3, somaFinal);

  
  return 0;
}
