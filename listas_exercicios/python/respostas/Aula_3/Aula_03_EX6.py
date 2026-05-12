import math

a = float(input("Digite o coeficiente 'a': "))
b = float(input("Digite o coeficiente 'b': "))
c = float(input("Digite o coeficiente 'c': "))

delta = b**2 - 4 * a * c

x1 = (-b + math.sqrt(delta)) / (2 * a)
x2 = (-b - math.sqrt(delta)) / (2 * a)

if delta == 0:
    print("A equação possui apenas uma raiz real: x = ", x1)
else:
    print("As raízes da equação são: x1 = ", x1, " e x2 = ", x2)