#7.3 – Múltiplos de dez: Peça um número ao usuário e, em seguida, informe se o
#número é múltiplo de dez ou não.

numero = int( input( 'digite um numero: ' ) )

if numero % 10 == 0 :
    print( 'esse numero é multiplo de 10' )
else :
    print( 'esse numero não é multiplo de 10' )