Tcorpo = 80

Tamb = 25

tempo = 0
tempo_1 = 0

while (Tcorpo - Tamb > 0.01):
    Tcorpo = Tcorpo - 0.1 * (Tcorpo - 25)
    
    if (Tcorpo <= 40) and (tempo_1 == 0):
        tempo_1 = tempo

    tempo +=1

print (f"o corpo demora {tempo_1} instantes (unidades de tempo) para atingir 40 °C")
print (f"o corpo demora {tempo} instantes (unidades de tempo) para atingir a temperatura ambiente")
