import math

raio = float(input("Qual é o raio da esfera? "))
altura = float(input("Qual é a altura da calota esférica? "))

volume_E = math.pi * altura**2 * (3 * raio - altura) / 3
area_E = 2 * math.pi * raio * altura

print ("O volume da esfera é de: ", volume_E)
print ("A área da superfície da esfera é de: ", area_E)