#7.4 – Ingredientes para uma pizza: Escreva um laço que peça ao usuário para
#fornecer uma série de ingredientes para uma pizza até que o valor 'quit' seja
#fornecido. À medida que cada ingrediente é especificado, apresente uma
#mensagem informando que você acrescentará esse ingrediente à pizza.

pizza = []

frag = True

while frag :
    ingrediente = input( 'digite um ingredite: (quit para finalizar pedido) ' )

    if ingrediente.lower() == 'quit':
         frag = False
         break
    elif ingrediente not in pizza:
        print( '{} será adicionado' .format( ingrediente ) )
        pizza.append( ingrediente )
    elif ingrediente in pizza:
        print( 'o ingrediente já foi adicionado' )
    
print( 'A lista de ingredientes seleceionados está abaixo: ' )

for ingrediente in pizza :
    print( ingrediente ) 