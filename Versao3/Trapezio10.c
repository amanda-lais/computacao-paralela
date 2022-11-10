#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void * Taylor (void *arg);

void * Taylor (void *arg)
{
  int my_rank = omp_get_thread_num () ;
  int thread_count = omp_get_num_threads () ;
  
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
  for (i =1; i < local_n ; i ++) {
    x = local_a + i* h;
    my_result += f(x );
    }
    my_result = my_result *h ;
    #pragma omp critical
    * global_result_p += my_result ;
  
  printf(" E= %.100f", E);
}


int main(void) 
{
  //Taylor();
  //contador de threads
  int thread_count ;
  thread_count = strtol (argv[1], NULL , 10) ;
  #pragma omp parallel num_threads(thread_count)
  Taylor ();
    
  double global_result = 0.0;
  
  int i = 0;

  return 0;
}


