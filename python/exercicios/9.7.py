#9.7 – Admin: Um administrador é um tipo especial de usuário. Escreva uma
#classe chamada Admin que herde da classe User escrita no Exercício 9.3
#(página 226), ou no Exercício 9.5 (página 232). Adicione um atributo
#privileges que armazene uma lista de strings como "can add post", "can
#delete post" "can ban user", e assim por diante. Escreva um método chamado
#show_privileges() que liste o conjunto de privilégios de um administrador. Crie
#uma instância de Admin e chame seu método.

class User():
    def __init__( self , first_name , last_name , cpf , login_attempts=0 ):
        self.first_name = first_name
        self.last_name = last_name
        self.cpf = cpf
        self.login_attempts = login_attempts
    def describe_user( self ):
        print('O usuario {} {} tem o cpf {}.' .format( self.first_name , self.last_name , self.cpf ) )
    def greet_user( self ):
        print('Seja bem vindo {} {}.' .format( self.first_name , self.last_name ) )
    def increment_login_attempts( self ):
        self.login_attempts+=1
    def reset_login_attempts( self ):
        self.login_attempts = 0

class Admin( User ):
    def __init__ ( self , first_name , last_name , cpf , privilegios , login_attempts=0  ):
        super().__init__( first_name , last_name , cpf , login_attempts )
        self.privilegios = privilegios
    def show_privileges( self ):
        print('The administer {}.' .format( self.privilegios ) )

user1 = Admin( 'enus' , 'nata' , '000.000.000-00' , 'can ban user' )

user1.describe_user()
user1.greet_user()
user1.show_privileges()