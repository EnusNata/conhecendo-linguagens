#9.8 – Privilégios: Escreva uma classe Privileges separada. A classe deve ter um
#atributo privileges que armazene uma lista de strings conforme descrita no
#Exercício 9.7. Transfira o método show_privileges() para essa classe. Crie
#uma instância de Privileges como um atributo da classe Admin. Crie uma nova
#instância de Admin e use seu método para exibir os privilégios.

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
        self.privilegios = Privileges( privilegios )

class Privileges():
    def __init__( self , *privileges ):
        self.privileges = privileges
    def show_privileges( self ):
        for privilege in self.privileges:
            print( privilege )

admin1 = Admin( 'enus' , 'nata' , '000.000.000-00' ,privilegios=['can ban user','can remove post']   ) 

admin1.describe_user()
admin1.greet_user()
admin1.privilegios.show_privileges()