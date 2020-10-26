#9.4 – Pessoas atendidas: Comece com seu programa do Exercício 9.1 (página
#225). Acrescente um atributo chamado number_served cujo valor default é 0.
#Crie uma instância chamada restaurant a partir dessa classe. Apresente o
#número de clientes atendidos pelo restaurante e, em seguida, mude esse valor e
#exiba-o novamente.
#Adicione um método chamado set_number_served() que permita definir o
#número de clientes atendidos. Chame esse método com um novo número e
#mostre o valor novamente.
#Acrescente um método chamado increment_number_served() que permita
#incrementar o número de clientes servidos. Chame esse método com qualquer
#número que você quiser e que represente quantos clientes foram atendidos, por
#exemplo, em um dia de funcionamento.

class Restaurant():
    def __init__( self , restaurant_name , cuisine_type , number_served=0 ):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = number_served
    def describe_restaurant( self ):
        print('O nome do resturante é : {}.' .format( self.restaurant_name ) )
        print('O tipo de comida é : {}.' .format( self.cuisine_type ) )
        print()
    def open_restaurant( self ):
        print('O restaurante está aberto.')
    def set_number_served( self , number_served ):
        self.number_served = number_served
    def increment_number_served( self ):
        self.number_served+=1
    
restaurante1 = Restaurant( 'cantinho dos berti' , 'comida caseira' )

print( restaurante1.number_served )

restaurante1.increment_number_served()

print( restaurante1.number_served )

restaurante1.set_number_served( 15 )

print( restaurante1.number_served )
