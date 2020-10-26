#7.2 – Lugares em um restaurante: Escreva um programa que pergunte ao usuário
#quantas pessoas estão em seu grupo para jantar. Se a resposta for maior que
#oito, exiba uma mensagem dizendo que eles deverão esperar uma mesa. Caso
#contrário, informe que sua mesa está pronta.

quantidade_de_pessoas = int( input( 'quantas pessoas estão em seu grupo para jantar: ' ) )

if quantidade_de_pessoas > 8 :
    print( 'voces deverão aguardar uma mesa' )
else :
    print( 'sua mesa está pronta' )