# Grupo:

Aluno: Nicolas Alteia Telles || TIA: 42010225

Aluno: Amanda Laís Xavier Fontes || TIA: 31949436

Aluno: Rodrygo Rogerio Vasconcellos || TIA: 42014492


---

# Projeto Final

Não conseguimos fazer uma versão que aprimorasse a nossa Versão 2. O grupo tentou fazer uso do paralelismo em GPU e teve dificuldade, também tentamos particularmente uma resolução utilizando o OpenMP (cujos detalhes estão mais abaixo), porém obtivemos problemas na saída de valores do programa e não conseguimos resolver. Arquivo: projFinal.c

Print da execução na AWS:

![image](https://user-images.githubusercontent.com/100282290/203699770-b40e77f3-dad9-45d3-82c5-d407ab2a4f9a.png)


Assim como na entrega da Versão 2:
* O grupo obteve dificuldade com a precisão de decimais na linguagem, portanto a partir de varias casas decimais, o progama retornava 0. Além disso, obtivemos precisão em 15 algarismos decimais, após isso tivemos imprecisão e os zeros da lingugagem.
* Utilizamos a função "clock_gettime()" para calcular o tempo, e a nossa primeira versão paralela teve um atraso de 5,116799 segundos na execução.
* Outra dificuldade do grupo foi com o output das threads, ao executar, ele mostra no console as duas threads em vez de apenas o resultado final.
* O código foi executado em uma maquina com 2 núcleos, a partir da AWS.

---

### Tentativa com OpenMP

Em relação a tentativa fazendo uso do OpenMP (código no repositório: tentativaPragma.c), corrigimos erros no nosso código OpenMP anterior e o print abaixo é a saída que estamos tendo.

![image](https://user-images.githubusercontent.com/100282290/203701102-f5ae8907-4824-4347-bd64-9ad8d7436c70.png)
