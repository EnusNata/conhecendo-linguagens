#6.7 – Pessoas: Comece com o programa que você escreveu no Exercício 6.1
#(página 147). Crie dois novos dicionários que representem pessoas diferentes e
#armazene os três dicionários em uma lista chamada people. Percorra sua lista
#de pessoas com um laço. À medida que percorrer a lista, apresente tudo que
#você sabe sobre cada pessoa.

pessoa1 = { 'nome':'enus' , 'sobrenome':'natã' , 'idade':'20' }
pessoa2 = { 'nome':'mari' , 'sobrenome':'me' , 'idade':'24' }
pessoa3 = { 'nome':'nathan' , 'sobrenome':'mousinho' , 'idade':'20' }

people = [ pessoa1 , pessoa2 , pessoa3 ]

for person in people :
    for key , value in person.items():
        print( key , value )
            