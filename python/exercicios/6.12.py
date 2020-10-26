#6.12 – Extensões: Estamos trabalhando agora com exemplos complexos o
#bastante para poderem ser estendidos de várias maneiras. Use um dos
#programas de exemplo deste capítulo e estenda-o acrescentando novas chaves
#e valores, alterando o contexto do programa ou melhorando a formatação da
#saída.

favorite_language = { 'enus':['c','c++'] }

frag = True

while frag :
    nome = input( 'digite seu nome: ' )
    if nome.lower() in favorite_language.values():
        continue
    else:
        languages =  input( 'digite suas linguagens favoritas: ' ) 

    languages = languages.split()

    favorite_language[nome] = languages

    parar = input( 'deseja continuar a pesquisa: ' )
    if parar.lower() == 'nao' :
        frag = False

for key , value in favorite_language.items():
    print( key , value ) 