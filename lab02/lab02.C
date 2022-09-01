# include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

//funcao fatorial
int fatoral2()
{
  int x = 1; //resposta
  int i,j,y; //variaveis
  
  printf("digite o numero maximo");
  scanf("%d", &y);
  
  for(i=1; i<=y; i += 1)
    {
      x = x*i;
    }
  
  printf("%d",x);
  
  return 0;
}

//codigo professor
int fatorial1()
{
   int i, num, j;
   printf ("Enter the number: ");
   scanf ("%d", &num);
   j = num;

   for (i=1; j > 1; j = j -1) {
         i=i*j;
   }

   printf("The factorial of %d is %d\n",num,i);
  return 0;
}


int main(int argc, char* argv[])
{  
  // -1 erro
  // 0 novo processo
  // >0 novo id antigo processo
  
  int x = 1; //resposta
  int i,j,y; //variaveis

  //criacao data tipo ids
  pid_t pid;
  pid = fork();

  if (argc !=2)
  {
    printf("erro");
  }

  //condicionais para id
  if (pid<0)
  {
    printf("erro");
  }
    
  else if (pid ==0)
    //segundo processo
  {
    //fatorial
    fatorial1();
    printf("%d",x);
    return 0;
  }
  
}
