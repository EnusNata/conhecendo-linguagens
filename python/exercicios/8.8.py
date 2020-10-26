#8.8 – Álbuns dos usuários: Comece com o seu programa do Exercício 8.7.
#Escreva um laço while que permita aos usuários fornecer o nome de um artista e
#o título de um álbum. Depois que tiver essas informações, chame make_album()
#com as entradas do usuário e apresente o dicionário criado. Lembre-se de incluir
#um valor de saída no laço while.

def make_album( artista , album , numero_faixas='' ):
    
    album = { 'artista':artista , 'album':album }
    
    if numero_faixas:
        album['numero_de_faixas'] = numero_faixas
    
    return album

frag = True

while frag:
    
    nome_artista = input( 'digite um artista: ' )
    nome_album = input( 'digite um album: ' )
    numero_faixas = input( 'digite o numero de faixas (opcional) : ' )
    continuar = input( 'deseja continuar (sim , nao)' )

    albuns = []
    album = make_album( nome_artista , nome_album , numero_faixas  )
    albuns.append( album )

    if continuar.lower() == 'nao':
        frag = False

for album in albuns:
    for alb in album.items():
        print( alb )
