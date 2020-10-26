#5.2 – Mais testes condicionais: Você não precisa limitar o número de testes que
#criar em dez. Se quiser testar mais comparações, escreva outros testes e
#acrescente-os em conditional_tests.py. Tenha pelo menos um resultado True e um
#False para cada um dos casos a seguir: 
# • testes de igualdade e de não igualdade com strings; 
# • testes usando a função lower(); 
# • testes numéricos que envolvam igualdade e não igualdade,
# maior e menor que, maior ou igual a e menor ou igual a; 
# • testes usando as palavras reservadas and e or; 
# • testes para verificar se um item está em uma lista; 
# • testes para verificar se um item não está em uma lista.

carros = ['Honda','Uno','Fiat','Chevrolet','Wolksvagem']

"""
for carro in carros:
    if carro.lower() == 'honda':
        print('O carro é da marca honda')
    elif carro.lower() == 'uno':
        print('o carro é da marca uno')
    elif carro.lower() == 'fiat':
        print('o carro é da marca fiat')
    elif carro.lower() == 'chevrolet':
        print('o carro é um chevrolet')
    elif carro.lower() == 'wolksvagem':
        print('o carro é da marca wolksvagem')
"""

"""
for carro in carros:
    if carro.lower() == 'uno' or carro.lower() == 'fiat':
        print('o carro é o fiat uno')
    else:
        continue
"""

"""
if 'shinerai' in carros:
    print('shinerai encontrada')
else:
    print('shinerai não encontrada')
"""

"""
if 'civic' not in carros:
    print('não possuimos o honda civic em estoque')
"""