#5.8 – Olá admin: Crie uma lista com cinco ou mais nomes de usuários, incluindo
#o nome 'admin'. Suponha que você esteja escrevendo um código que exibirá
#uma saudação a cada usuário depois que eles fizerem login em um site.
#Percorra a lista com um laço e mostre uma saudação para cada usuário: • Se o
#nome do usuário for 'admin', mostre uma saudação especial, por exemplo, Olá
#admin, gostaria de ver um relatório de status?
#127• Caso contrário, mostre uma saudação genérica, como Olá Eric, obrigado por
#fazer login novamente.

usuarios = ['claudinho','buchecha','joao','jonny','caue de boca na pica','admin']

for usuario in usuarios:
    if usuario == 'admin':
        print('bem vindo admin, gostaria de ver um relatorio de status')
    else:
        print('bem vindo {}'.format( usuario ))