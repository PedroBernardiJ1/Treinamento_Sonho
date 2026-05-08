nome = str(input("Digite o nome do robô: "))

velocidade = float(input("Digite a velocidade atual do robô: "))

bateria = int(input("Digite o nível da bateria: "))

modo = str(input("Digite o modo de operação (manual / automático): "))

print (f"""{"="*40}
{"STATUS DO ROBÔ":^40}
{"="*40}
Robô: {nome}
Velocidade atual: {velocidade:.2f} m/s
Bateria: {bateria:.2f}%
Modo de operação: {modo}
{"="*40}""")