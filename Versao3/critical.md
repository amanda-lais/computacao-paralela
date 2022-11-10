Crie um arquivo chamado critical.md de texto explicando como é feito o controle de acesso à região crítica para a variável global compartilhada do seu projeto


-O acesso a região critica é feita através da bibliote OMP, na qual utilizamos o "#pragma opcritical" para somar os varores na variável global (através das variáveis locais de cada thread) sem que as threads se atropelassem e dessem valores errados, sendo assim, a soma de uma por uma.
