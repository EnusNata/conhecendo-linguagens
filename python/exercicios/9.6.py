#9.6 – Sorveteria: Uma sorveteria é um tipo específico de restaurante. Escreva
#uma classe chamada IceCreamStand que herde da classe Restaurant escrita no
#Exercício 9.1 (página 225) ou no Exercício 9.4 (página 232). Qualquer
#versão da classe funcionará; basta escolher aquela de que você mais gosta.
#Adicione um atributo chamado flavors que armazene uma lista de sabores de
#sorvete. Escreva um método para mostrar esses sabores. Crie uma instância de
#IceCreamStand e chame esse método.

class Restaurant():
    def __init__( self , restaurant_name , cuisine_type  ):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    def describe_restaurant( self ):
        print('O nome de restaurante é : {}.' .format( self.restaurant_name ) )
        print('O tipo de culinaria desse restaurante é : {}.' .format( self.cuisine_type ) )
    def open_restaurant( self ):
        print('O restaurante está aberto.')

class IceCreamStand( Restaurant ):
    def __init__( self , restaurant_name , cuisine_type , flavors ):
        super().__init__( restaurant_name , cuisine_type )
        self.flavors = flavors
    def showFlavors( self ):
        print('O sabor do sorvete é {}.' .format( self.flavors ) )

myicecream = IceCreamStand( 'sorveteria' , 'sorvete' , 'flocos' )

myicecream.open_restaurant
myicecream.describe_restaurant()
myicecream.showFlavors()