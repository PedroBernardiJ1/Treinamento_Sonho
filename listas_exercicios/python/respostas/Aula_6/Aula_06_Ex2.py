distancias = [1.5, 2.0, 0.8, 3.2, 1.1]

print (f"""Menor distância detectada: {min (distancias)}
Maior distância detectada: {max (distancias)}""")

contador = 0

for obstaculo in distancias:
    if (obstaculo < 1):
        contador += 1

print (f"{contador} objeto(s) está a menos de 1 metro!")
