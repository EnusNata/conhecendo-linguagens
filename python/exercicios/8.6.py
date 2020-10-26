#8.6 – Nomes de cidade: Escreva uma função chamada city_country() que
#aceite o nome de uma cidade e seu país. A função deve devolver uma string
#formatada assim: "Santiago, Chile"
#Chame sua função com pelo menos três pares cidade-país e apresente o valor
#devolvido.

def city_country( cidade , país ):
    city_countr = cidade + ', ' + país
    return city_countr 

city_countr = city_country( 'Rio De Janeiro' , 'Brasil' )

print( city_countr )

city_countr = city_country( 'París' , 'França' )

print( city_countr )

city_countr = city_country( 'Tokyo' , 'Japão' )

print( city_countr )