#8.9 – Mágicos: Crie uma lista de nomes de mágicos. Passe a lista para uma
#função chamada show_magicians() que exiba o nome de cada mágico da
#lista.

def show_magicians( magicians ):
    for magician in magicians:
        print(magician)

magicos = [ 'mr m' , 'cris angel' , 'david cloverfiel' ]

show_magicians( magicos[:] )