#6.3 – Glossário: Um dicionário Python pode ser usado para modelar um
#dicionário de verdade. No entanto, para evitar confusão, vamos chamá-lo de
#glossário.
#• Pense em cinco palavras relacionadas à programação que você conheceu
#nos capítulos anteriores. Use essas palavras como chaves em seu glossário e
#armazene seus significados como valores.
#• Mostre cada palavra e seu significado em uma saída formatada de modo
#elegante. Você pode exibir a palavra seguida de dois-pontos e depois o seu
#significado, ou apresentar a palavra em uma linha e então exibir seu
#significado indentado em uma segunda linha. Utilize o caractere de quebra
#de linha (\n) para inserir uma linha em branco entre cada par palavra-
#significado em sua saída

glossario = { 'justica':'dar ao homem aquilo que lhe é justo' , 
              'altruismo':'colocar os outros acima de si mesmo' , 
              'egoismo':'colocar a si mesmo acima dos outros' }

for key , value in glossario.items():
    print( key )
    print('\t{}'.format( value ))