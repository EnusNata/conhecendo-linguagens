#6.8 – Animais de estimação: Crie vários dicionários, em que o nome de cada
#dicionário seja o nome de um animal de estimação. Em cada dicionário, inclua
#o tipo do animal e o nome do dono. Armazene esses dicionários em uma lista
#chamada pets. Em seguida, percorra sua lista com um laço e, à medida que
#fizer isso, apresente tudo que você sabe sobre cada animal de estimação.

rex = { 'tipo':'cachorro' , 'dono':'cleytu' }
lin = { 'tipo':'gato' , 'dono':'énóis' }
ona = { 'tipo':'raposa' , 'dono':'coringa' }

pets = [ rex , lin , ona ]

for pet in pets:
    for key , value in sorted ( pet.items() ) :
        print( key , value )