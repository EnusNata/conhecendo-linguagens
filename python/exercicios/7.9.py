#7.9 – Sem pastrami: Usando a lista sandwich_orders do Exercício 7.8, garanta
#que o sanduíche de 'pastrami' apareça na lista pelo menos três vezes.
#Acrescente um código próximo ao início de seu programa para exibir uma
#166mensagem informando que a lanchonete está sem pastrami e, então, use um
#laço while para remover todas as ocorrências de 'pastrami' e
#sandwich_orders. Garanta que nenhum sanduíche de pastrami acabe em
#finished_sandwiches.

sanduiches = [ 'x-tudo','pastrami','x-bacon','pastrami','x=tudo','pastrami' ]

for sanduiche in sanduiches:
    print( sanduiche )

print( 'estamos sem pastrami' )

while 'pastrami' in sanduiches :
    sanduiches.remove( 'pastrami' )

for sanduiche in sanduiches:
    print( sanduiche )