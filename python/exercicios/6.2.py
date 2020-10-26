#6.2 – Números favoritos: Use um dicionário para armazenar os números favoritos
#de algumas pessoas. Pense em cinco nomes e use-os como chaves em seu
#dicionário. Pense em um número favorito para cada pessoa e armazene cada
#um como um valor em seu dicionário. Exiba o nome de cada pessoa e seu
#número favorito. Para que seja mais divertido ainda, faça uma enquete com
#alguns amigos e obtenha alguns dados reais para o seu programa.

numeros_favoritos = { 'enus':7 , 'lorran':3 , 'lucas':4 , 'joao':11 , 'vitim':69 }

for key , value in numeros_favoritos.items():
    print('{} = {}'.format(key , value))