import math

v0 = float (input ("Qual foi a velocidade do lançamento (em m/s)? "))
a = float (input ("Qual foi o ângulo de lançamento (em radianos)? "))

g = 9.81

R = (v0 ** 2 * math.sin(2 * a)) / g

print("O alcance do projétil foi de ", R, " m")