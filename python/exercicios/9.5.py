#9.5 – Tentativas de login: Acrescente um atributo chamado login_attempts à
#sua classe User do Exercício 9.3 (página 226). Escreva um método chamado
#increment_login_attempts() que incremente o valor de login_attempts em 1.
#Escreva outro método chamado reset_login_attempts() que reinicie o valor de
#login_attempts com 0.
#Crie uma instância da classe User e chame increment_login_attempts()
#várias vezes. Exiba o valor de login_attempts para garantir que ele foi
#incrementado de forma apropriada e, em seguida, chame
#reset_login_attempts(). Exiba login_attempts novamente para garantir que
#seu valor foi reiniciado com 0.

class User():
    def __init__( self , first_name , last_name , cpf , login_attempts ):
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
    
usuario = User( 'enus' , 'nata' ,'000.000.000-00' , 1 )

print( usuario.login_attempts )

usuario.increment_login_attempts()

print( usuario.login_attempts )

usuario.reset_login_attempts()

print( usuario.login_attempts )