#9.10 – Importando Restaurant: Usando sua classe Restaurant mais recente,
#armazene-a em um módulo. Crie um arquivo separado que importe Restaurant.
#Crie uma instância de Restaurant e chame um de seus métodos para mostrar
#223que a instrução import funciona de forma apropriada.

import Restaurante 

meu_restaurante = Restaurante.Restaurant( 'pé de fava' , 'comida caseira' )

meu_restaurante.open_restaurant()
meu_restaurante.describe_restaurant()