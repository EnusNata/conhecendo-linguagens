#4.6 – Números ímpares: Use o terceiro argumento da função range() para criar
#uma lista de números ímpares de 1 a 20. Utilize um laço for para exibir todos
#os números.

impares = []

for numero in range(1,21,2):
    impares.append( numero )

for impar in impares:
    print( impar )