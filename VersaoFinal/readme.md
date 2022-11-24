# Grupo:

Aluno: Nicolas Alteia Telles || TIA: 42010225

Aluno: Amanda Laís Xavier Fontes || TIA: 31949436

Aluno: Rodrygo Rogerio Vasconcellos || TIA: 42014492


---

# Projeto Final

- O grupo decidiu voltar a versão utilizando pthreads, padrao POSIX.
- Módulo time foi retirado e medido pelo console.
- Resolvido o bug das threads da ultima versão, as variáveis de resultado estavam sendo chamadas dentro do loop, portanto o resultado estava errado.
- Adotamos o paralelismo de tarefas, de forma que cada thread executasse um pedaço das interações (uma thread para cada pedaço), e como executamos na aws, fizemos com duas threads, sendo uma para cada metade, e logo depois disso juntamos os resultados.

## Execuções para 1000000 iterações:

Duas execuções na AWS:

![image](https://user-images.githubusercontent.com/101070201/203726887-9db66276-564b-4cba-b660-f793eb026547.png)

Execução em outra plataforma com 2 threads (replit):

![image](https://user-images.githubusercontent.com/101070201/203727644-2dd6f818-d750-4d21-89eb-6587d3cf78c7.png)



Assim como na entrega da Versão 2:

* O código foi executado em uma maquina com 2 núcleos, a partir da AWS.
* Nossa primeira versão foi feita em python (serial), e não conseguimos obter uma precisão maior que 10000 iterações, print execução:
* ![image](https://user-images.githubusercontent.com/101070201/203731040-0ab6f0f8-8bbd-4034-98ac-b7608fc0c2a9.png)
* A ultima versão feita em pragma demorou 730 segundos em média para executar as 1000000 iterações, e a ultima versão em média 678, obtendo assim um speed up de 1,0766. Não conseguimos comparar o speed-up com a versão serial em python devido as limitações da linguagem dela.
 
---

### Versão openMP (passada)

- Refizemos o código para openMP, com precisão de 6 casas decimais. e média de 730 segundos (3 execuções)
Print de uma execução na plataforma AWS:

![image](https://user-images.githubusercontent.com/101070201/203731908-643201a9-b23f-48b0-b7d5-370736ef4479.png)

#### Análise dos Problemas no openMP

* Obtivemos imprecisão decimais na sexta casa decimal com 100000 iterações
* Resolvemos o problema a partir de um loop dentro de outro loop, para fazer o exponencial dentro das diversas iterações e isso prejudicou na hora de paralelizar, gerando erros e imprecisões para o openMP
* O tempo de execução para pthreads foi menor do que o pragma, e por isso também escolhemos retornar para as pthreads

### Observações
- Arquivo preVersaoFinal.c, contém experimentação com mais de duas threads para soma (porém nao foi utilizado na versão final)
- pragmaEditado.c consiste na versão atualizada da versão com openMP
- projFinal.c é a versão final do projeto em C.
