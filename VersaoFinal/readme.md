# Grupo:

Aluno: Nicolas Alteia Telles || TIA: 42010225

Aluno: Amanda Laís Xavier Fontes || TIA: 31949436

Aluno: Rodrygo Rogerio Vasconcellos || TIA: 42014492


---

# Projeto Final

-O grupo decidiu voltar a versão utilizando pthreads, padrao POSIX.
-Módulo time foi retirado e medido pelo console.
-Resolvido o bug das threads da ultima versão, as variáveis de resultado estavam sendo chamadas dentro do loop, portanto o resultado estava errado.
-Adotamos o paralelismo de tarefas, de forma que cada thread executasse um pedaço das interações (uma thread para cada pedaço), e como executamos na aws, fizemos com duas threads, sendo uma para cada metade, e logo depois disso juntamos os resultados.

## Execuções para 1000000 iterações:

Duas execuções na AWS:

![image](https://user-images.githubusercontent.com/101070201/203726887-9db66276-564b-4cba-b660-f793eb026547.png)

Execução em outra plataforma com 2 threads (replit):

![image](https://user-images.githubusercontent.com/101070201/203727644-2dd6f818-d750-4d21-89eb-6587d3cf78c7.png)



Assim como na entrega da Versão 2:
* Utilizamos a função "clock_gettime()" para calcular o tempo, e a nossa primeira versão paralela teve um atraso de 5,116799 segundos na execução.
* O código foi executado em uma maquina com 2 núcleos, a partir da AWS.

---

### Versão openMP (passada)

Refizemos o código para openMP, porém sem sucesso na segunda thread, com precisão de 6 casas decimais.

![image](https://user-images.githubusercontent.com/100282290/203701102-f5ae8907-4824-4347-bd64-9ad8d7436c70.png)
