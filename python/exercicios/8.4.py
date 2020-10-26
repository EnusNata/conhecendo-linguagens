#8.4 – Camisetas grandes: Modifique a função make_shirt() de modo que as
#camisetas sejam grandes por default, com uma mensagem Eu amo Python. Crie
#uma camiseta grande e outra média com a mensagem default, e uma camiseta
#de qualquer tamanho com uma mensagem diferente.

def make_shirt( tamanho='G' , texto='Eu amo python' ):
    print( 'O tamanho selecionado é {}.' .format( tamanho ) )
    print( 'A frase selecionada é : {}.' .format( texto ) )
    print()

make_shirt()
make_shirt( 'M' )
make_shirt( tamanho='M' , texto='Volta Geisel' )