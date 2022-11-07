### obs
-Na criação das máquinas, não obtivemos êxito em criar máquinas com mais de 2 processadores, obtivemos erro de permissão(segue print abaixo), portanto os resultados foram feitos em máquias com 2 vCPUs
![image](https://user-images.githubusercontent.com/101070201/200226510-f3e1ae72-ea38-4e5a-abbb-ca877d0076ad.png)

-Fizemos pequenas alterações nos códigos das outras entregas (multiplicação de matrizes e da soma de trapézios), para alcançar outras versões paralelas.
-Para o código das matrizes, utilizamos de base o material da universidade de Delaware, segue o link: https://www.eecis.udel.edu/~cavazos/cisc879/Lecture-03.pdf
-Alteramos a utilização da biblioteca time para utilização do comando time no terminal para determinar o tempo de execução.

### Códigos:
-Os resultados deram parecidos devido a ordem de acesso das threads na variável global_result, e possivelmente devido a limitação dos testes (criação de máquinas com 2 cores na AWS).
-Resultados das somatórias nos prints abaixo:

-Para o primeiro método utilizamos o Lock (arquivo trapezioLock)
-Print das execuções do método na AWS:

![image](https://user-images.githubusercontent.com/101070201/200227111-84c88ebb-4314-4ef8-88f5-ab4ab645dd33.png)

-Para o segundo método utilizamos o atomic (arquivo trapezioatomic)
-Print das execuções do método na AWS:

![image](https://user-images.githubusercontent.com/101070201/200227132-9287e2ff-66bc-43aa-ad86-15e7189c560a.png)

---

### Soma dos trapézios -  soma de tempos
*Tabelas feitas com a limitação dos 2 CPUs da aws
*prints dos tempos de execução no arquivo printsExecLab7.md

-Tabela para versao lock:

Comparando tempos de execução:

| Número de processadores | Número de threads | Tempo médio de execução (3 execuções) |
| --- | --- | --- |
| 1 | 1 | 3,16 |
| 2 | 2 | 3,43s |
| 4 | - | - |
| 8 | - | - |

-Tabela para versao atomic

| Número de processadores | Número de threads | Tempo médio de execução (3 execuções) |
| --- | --- | --- |
| 1 | 1 | 2,33s |
| 2 | 2 | 4,43s |
| 4 | - | - |
| 8 | - | - |

Gráfico da escalabilidade do Speedup:
-Azul claro para lock e Azul escuro para atomic:

![image](https://user-images.githubusercontent.com/101070201/200263884-a948d2fb-c57b-484f-84a5-722391dbb87d.png)


### Multiplicação de matrizes
*Tabelas feitas com a limitação dos 2 CPUs da aws
*prints dos tempos de execução no arquivo printsExecLab7.md

| Número de processadores | Número de threads | Tempo médio de execução |
| --- | --- | --- |
| 1 | 1 | 1,83 |
| 2 | 2 |2,62s |
| 4 | - | - |
| 8 | - | - |


Gráfico da escalabilidade do Speedup:

![image](https://user-images.githubusercontent.com/101070201/200264141-da9f368f-f21b-4719-8f41-b6ee1414bdaa.png)
