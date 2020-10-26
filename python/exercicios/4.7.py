#4.7– Três: Crie uma lista de múltiplos de 3, de 3 a 30. Use um laço for para
#exibir os números de sua lista.

multiplos = []

for numero in range(3,31,3):
    multiplos.append( numero )

for multiplo in multiplos:
    print( multiplo )