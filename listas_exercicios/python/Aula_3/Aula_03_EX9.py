import math

raio = float(input("Qual é o raio da esfera? "))

volume_E = 4 / 3 * math.pi * (raio ** 3)
area_E = 4 * math.pi * (raio ** 2)

print ("O volume da esfera é de: ", volume_E)
print ("A área da superfície da esfera é de: ", area_E)