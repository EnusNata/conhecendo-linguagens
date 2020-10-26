#7.8 – Lanchonete: Crie uma lista chamada sandwich_orders e a preencha com
#os nomes de vários sanduíches. Em seguida, crie uma lista vazia chamada
#finished_sandwiches. Percorra a lista de pedidos de sanduíches com um laço e
#mostre uma mensagem para cada pedido, por exemplo, Preparei seu
#sanduíche de atum. À medida que cada sanduíche for preparado, transfira-o
#para a lista de sanduíches prontos. Depois que todos os sanduíches estiverem
#prontos, mostre uma mensagem que liste cada sanduíche preparado.

sandwich_orders = [ 'x-tudo','x-bacon','x=burguer' ]

finished_sandwiches = []

for sandwich_order in sandwich_orders :
    print( 'preparei o seu {}' .format( sandwich_order ) )

    finished_sandwiches.append( sandwich_order )

print( 'os seguintes sanduiches foram finalizados: ' )

for finished_sandwiche in finished_sandwiches :
    print( finished_sandwiche )

while sandwich_orders :
    sandwich_orders.pop()

    