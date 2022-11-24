#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void * Taylor (int thread_count, double* global_result_p);

int main(int argc, char* argv[]) 
{
  //Taylor();
  double global_result_p = 0.0;
  //contador de threads
  int thread_count;
  thread_count = strtol (argv[1], NULL , 10) ;
  Taylor(thread_count,&global_result_p);
  printf(" E= %.100f", global_result_p);
  int i = 0;
  return 0;
}

void * Taylor (int thread_count,double* global_result_p)
{
  //int my_rank = omp_get_thread_num() ;
  //int thread_count = omp_get_num_threads() ;
  //int *var = (int *)(argv);
  int T = 100000;
  int i,j;
  double f = 1.0;
  double E = 0.0;
  #pragma omp parallel for num_threads(thread_count)
    for (i = 0; i<=T; i++)
    {
      f = 1;
      for(j=1;j<=i;j++)
      {
        f = f*j;
      }
  #pragma omp critical
      * global_result_p += 1.0/f;
    }
}
