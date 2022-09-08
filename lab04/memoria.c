//codigo em C abaixo, feito com auxilio de: 
//https://wiki.sj.ifsc.edu.br/index.php/SOP29005-2014-1 e https://pt.stackoverflow.com/questions/280470/mem%C3%B3ria-compartilhada-entre-processos-linux-c-opera%C3%A7%C3%B5es-matem%C3%A1ticas
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/shm.h>

int main()
{
  //variaveis
  pid_t id_filho;
  int id_memoria; 

  //funcao shmid
  id_memoria = shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0660);
       if (id_memoria < 0) 
        {
           printf("erro\n");
        }

  int *x = (int*)shmat(id_memoria, NULL, 0);
  *x = 1;

  printf("Variavel compartilhada: %i\n",*x);
  
  //criacao fork
  id_filho = fork();
  
  printf("processo filho: %i\n",id_filho);
 
  if (id_filho == 0)
  {     
      *x+= 2;  
      printf("variavel compartilhada+2: %i\n",*x);    
  }
  else
  {   
    *x *= 4 ;
    printf("Variavel compartilhada*4: %i\n",*x);    
  }
  return 0;
}
