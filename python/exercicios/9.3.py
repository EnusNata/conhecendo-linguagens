#9.3 – Usuários: Crie uma classe chamada User. Crie dois atributos de nomes
#first_name e last_name e, então, crie vários outros atributos normalmente
#armazenados em um perfil de usuário. Escreva um método de nome
#describe_user() que apresente um resumo das informações do usuário. Escreva
#outro método chamado greet_user() que mostre uma saudação personalizada
#ao usuário.
#Crie várias instâncias que representem diferentes usuários e chame os dois
#métodos para cada usuário.

class User():
    def __init__( self , first_name , last_name , cpf ):
        self.first_name = first_name
        self.last_name = last_name
        self.cpf = cpf
    def describe_user( self ):
        print('O usuario {} {} tem o cpf {}.' .format( self.first_name , self.last_name , self.cpf ) )
    def greet_user( self ):
        print('Seja bem vindo {} {}.' .format( self.first_name , self.last_name ) )

usuario1 = User( 'enus' , 'natã', '700.963.574-95' )
usuario2 = User( 'marlon' , 'gomes' , '600.675.394-43' )

usuario1.describe_user()
usuario2.describe_user()