#6.10 – Números favoritos: Modifique o seu programa do Exercício 6.2 (página
#147) para que cada pessoa possa ter mais de um número favorito. Em seguida,
#apresente o nome de cada pessoa, juntamente com seus números favoritos.

favorite_number = { 'nome':'enus' , 'numero':['3','7'] }

for key , value in favorite_number.items() :
    print( key , value)