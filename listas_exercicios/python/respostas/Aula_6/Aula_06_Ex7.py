import math

angulos_rad = [math.radians(grau) for grau in range (0, 361, 10)]

raio = 2
trajetoria = []

for theta in angulos_rad:
    ponto = (round (raio * math.cos(theta), 2), round (raio * math.sin(theta), 2))
    trajetoria.append (ponto)

for ponto in trajetoria[:5]:
    print(ponto)

for ponto in trajetoria[-5:]:
    print(ponto)
