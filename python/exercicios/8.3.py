#8.3 – Camiseta: Escreva uma função chamada make_shirt() que aceite um
#tamanho e o texto de uma mensagem que deverá ser estampada na camiseta.
#A função deve exibir uma frase que mostre o tamanho da camiseta e a
#mensagem estampada.
#Chame a função uma vez usando argumentos posicionais para criar uma
#camiseta. Chame a função uma segunda vez usando argumentos nomeados.

def make_shirt( tamanho , texto ):
    print( 'O tamanho selecionado é {} ' .format( tamanho ) )
    print( 'A frase selecionada é : {} ' .format( texto ) )

make_shirt( 'M' , 'A maior minoria na terra é o individuo.' )

make_shirt( texto='Machistas não passarão' , tamanho='P' )