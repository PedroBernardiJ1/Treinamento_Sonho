import math

h1 = float (input ("Qual é a altura no ponto A (em metros)? "))
h2 = float (input ("Qual é a altura no ponto B (em metros)? "))

massa = 500
vi = 1
g = 9.81

Epi = (massa * h1 * g)
Ec = massa * vi ** 2 / 2

Epf = massa * h2 * g

E1 = Epi + Ec

vf = math.sqrt((E1 - Epf) * 2 / massa)

print("A velocidade do carrinho no ponto B foi de ", vf, " m/s")
