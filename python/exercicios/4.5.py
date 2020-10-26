#4.5 – Somando um
#milhão: Crie uma lista de números de um a um milhão e, em seguida, use min()
#e max() para garantir que sua lista realmente começa em um e termina em um
#milhão. Além disso, utilize a função sum() para ver a rapidez com que Python é
#capaz de somar um milhão de números.

numeros = []

for numero in range(1,101):
    numeros.append(numero)

print('O menor valor da lista é {}'.format( min( numeros ) ))
print('O maior valor da lista é {}'.format( max( numeros ) ))
print('A soma dos valores da lista é {}'.format( sum( numeros ) ))