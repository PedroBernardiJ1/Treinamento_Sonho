x0 = 0
v0 = 1.0
a = 0.5
dt = 0.1
tempo_total = 2.0

quantidade_tempos = int(tempo_total / dt)

tempos = [round (i * dt, 2) for i in range (quantidade_tempos + 1)]

posicoes = [round(x0 + v0 * tempo + ((a * (tempo ** 2)) / 2), 2) for tempo in tempos]

print (f"As 5 primeiras posições do robô foram: {posicoes[:5]}")
