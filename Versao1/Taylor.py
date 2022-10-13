#primeira versao taylor
#Amanda Lais || TIA: 31949436
#Nicolas Telles || TIA: 42010225
#Rodrygo Rogerio || TIA: 42014492

import math
#variaveis, sendo i o numero maximo de termos
i =int(input("digite o numero de termos: "))
x = float(input("digite o ponto do polinomio: "))
n =0
resultTaylor = 0
for n in range(0, i+1):
        resultTaylor+= math.pow(x,n)/math.factorial(n) 
        print("Polinomio: " + "{:.4f}".format(resultTaylor))

