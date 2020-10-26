class Restaurant():
    def __init__( self , restaurant_name , cuisine_type  ):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    def describe_restaurant( self ):
        print('O nome de restaurante é : {}.' .format( self.restaurant_name ) )
        print('O tipo de culinaria desse restaurante é : {}.' .format( self.cuisine_type ) )
    def open_restaurant( self ):
        print('O restaurante está aberto.')
