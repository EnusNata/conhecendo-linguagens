#6.6 – Enquete: Utilize o código em favorite_languages.py (página 150).
#• Crie uma lista de pessoas que devam participar da enquete sobre linguagem
#favorita. Inclua alguns nomes que já estejam no dicionário e outros que não
#estão.
#• Percorra a lista de pessoas que devem participar da enquete. Se elas já
#tiverem respondido à enquete, mostre uma mensagem agradecendo-lhes por
#responder. Se ainda não participaram da enquete, apresente uma mensagem
#convidando-as a responder.

favorite_languages = { 'enus':'python' , 'mari':'c++' , 'vitin':'java' , 'nathan':'c' }

frag = True

while frag :
    nome = input( 'digite seu nome: ' )
    if nome.lower() in favorite_languages.keys():
        continue
    else :
        language = input( 'qual sua linguagem favorita: ' ) 
    
    if nome and language :
        favorite_languages[nome] = language 

    resposta = input('voce deseja continuar a pesquisa: ')
    if resposta.lower() == 'nao' :
        frag = False 

for key , value in favorite_languages.items():
    print( key , value )