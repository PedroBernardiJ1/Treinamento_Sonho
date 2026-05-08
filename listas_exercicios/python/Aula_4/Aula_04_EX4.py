nome = str(input("Digite o nome do robô: "))

velocidade = float(input("Digite a velocidade média do robô: "))

tempo = float(input("Digite o tempo do experimento: "))


print (f"""{" Relatório de Experimento ":=^44}
Robô: {nome}
Velocidade Média: {velocidade:.2f} m/s
Tempo do experimento: {tempo:.2f} s""")