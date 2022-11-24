#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>    // for clock_t, clock()
#define BILLION  1000000000.0

int main(void) 
{
  struct timespec start, end;
  clock_gettime(CLOCK_REALTIME, &start);
  
  int N = 1000;
  int i,j;
  double f, E = 1.0;
  for(i=1; i <= N; i++)
  {
    f = 1;
    for(j=1;j<=i;j++)
    {
      f = f*j;
    }
    E += 1.0/f;
  }

  printf("E = %.1000f\n", E);
  //system("pause");
  
  clock_gettime(CLOCK_REALTIME, &end);
  
  double time_spent = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / BILLION;
  printf("The elapsed time is %f seconds", time_spent);
  return 0;
}
