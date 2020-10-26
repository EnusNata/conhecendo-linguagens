#8.7 – Álbum: Escreva uma função chamada make_album() que construa um
#dicionário descrevendo um álbum musical. A função deve aceitar o nome de um
#artista e o título de um álbum e deve devolver um dicionário contendo essas
#duas informações. Use a função para criar três dicionários que representem
#álbuns diferentes. Apresente cada valor devolvido para mostrar que os
#dicionários estão armazenando as informações do álbum corretamente.
#Acrescente um parâmetro opcional em make_album() que permita armazenar
#o número de faixas em um álbum. Se a linha que fizer a chamada incluir um
#valor para o número de faixas, acrescente esse valor ao dicionário do álbum.
#Faça pelo menos uma nova chamada da função incluindo o número de faixas
#em um álbum.

#def make_album( artista , album ):
#    album = { artista:album }
#    return album 
#
#album1 = make_album( 'froid' , 'rapstar' )
#album2 = make_album( 'charlie brown jr' , 'sk8' )
#album3 = make_album( 'rebelde' , 'RBD' )
#
#print( album1 )
#print()
#print( album2 )
#print()
#print( album3 )

def make_album( artista , album , numero_faixas='' ):
    
    album = { 'artista':artista , 'album':album  }
    
    if numero_faixas:
        album['numero_de_faixas'] = numero_faixas

    return album

album1 = make_album( 'livinho' , 'funk' , 24 )
album2 = make_album( 'froid' , 'malok' )
album3 = make_album( 'jhonny' , 'teste' , 13 )

print( album1 )
print()
print( album2 )
print()
print( album3 )