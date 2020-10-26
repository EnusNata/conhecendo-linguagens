#9.2 – Três restaurantes: Comece com a classe do Exercício 9.1. Crie três
#instâncias diferentes da classe e chame describe_restaurant() para cada
#instância.

class Restaurant():
    def __init__( self , restaurant_name , cuisine_type ):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    def describe_restaurant( self ):
        print('O nome do resturante é : {}.' .format( self.restaurant_name ) )
        print('O tipo de culinaria é : {}.' .format( self.cuisine_type ) )
        print()
    def open_restaurant( self ):
        print('O restaurante está aberto.')

meu_restaurante = Restaurant( 'MEU RESTAURANTE' , 'caseira' )
seu_restaurante = Restaurant( 'SEU RESTAURANTE' , 'chinesa' )
his_restaurante = Restaurant( 'HIS RESTAURANTE' , 'japonesa' )

meu_restaurante.describe_restaurant()
seu_restaurante.describe_restaurant()
his_restaurante.describe_restaurant()