#9.1 – Restaurante: Crie uma classe chamada Restaurant. O método __init__()
#de Restaurant deve armazenar dois atributos: restaurant_name e
#cuisine_type. Crie um método chamado describe_restaurant() que mostre
#essas duas informações, e um método de nome open_restaurant() que exiba
#uma mensagem informando que o restaurante está aberto.
#Crie uma instância chamada restaurant a partir de sua classe. Mostre os
#dois atributos individualmente e, em seguida, chame os dois métodos.

class Restaurant():
    def __init__( self , restaurant_name , cuisine_type  ):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    def describe_restaurant( self ):
        print('O nome de restaurante é : {}.' .format( self.restaurant_name ) )
        print('O tipo de culinaria desse restaurante é : {}.' .format( self.cuisine_type ) )
    def open_restaurant( self ):
        print('O restaurante está aberto.')

restaurante = Restaurant( 'bistro' , 'culinaria caseira' )

restaurante.describe_restaurant()
restaurante.open_restaurant()