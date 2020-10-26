#4.10 – Fatias: Usando um dos programas que você escreveu neste capítulo,
#acrescente várias linhas no final do programa que façam o seguinte: • Exiba a
#mensagem Os três primeiros itens da lista são: Em seguida, use uma fatia para
#exibir os três primeiros itens da lista desse programa.
#• Exiba a mensagem Três itens do meio da lista são:. Use uma fatia para exibir
#três itens do meio da lista.
#• Exiba a mensagem Os três últimos itens da lista são:. Use uma fatia para
#exibir os três últimos itens da lista.

jogos = ['resident evil','sillent hill','dark souls']

jogos.append( 'naruto' )
jogos.append( 'dragon ball')

print('Os tres primeiros jogos da lista são: ')

for jogo in jogos[:3]:
    print( jogo )

print('Os tres ultimos jogos da lista são: ')

for jogo in jogos[-3:]:
    print( jogo )