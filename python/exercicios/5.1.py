#5.1 – Testes condicionais: Escreva uma série de testes condicionais. Exiba uma
#frase que descreva o teste e o resultado previsto para cada um. Seu código
#deverá ser semelhante a: car = 'subaru'
#print("Is car == 'subaru'? I predict True.") print(car == 'subaru')
#print("\nIs car == 'audi'? I predict False.") print(car == 'audi') •
#Observe atentamente seus resultados e certifique-se de que compreende
#por que cada linha é avaliada como True ou False.
#• Crie pelo menos dez testes. Tenha no mínimo cinco testes avaliados como
#True e outros cinco avaliados como False.

carro = 'uno'

print('é carro == \'palio\'. eu digo {}'.format( carro == 'palio' ))
print('é carro == \'honda\'. eu digo {}'.format( carro == 'honda' ))
print('é carro == \'uno\'. eu digo {}'.format( carro == 'uno' ))

if carro == 'uno':
    print('carro == uno ')