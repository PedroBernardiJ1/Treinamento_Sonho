max_iter = int (input ("Digite o número máximo de iterações: "))
tol = float (input ("Digite a tolerância desejada: "))
N = float (input ("Digite o número que deseja encontrar a raiz quadrada: "))

x = 1.0              # chute inicial

iteracao = 0

for i in range (max_iter):
    x = (1 / 2) * (x + (N / x))
    iteracao += 1
    
    if (abs (x ** 2 - N) < tol):
        break

print(f"Raiz aproximada: {x}")
print(f"Número de iterações: {iteracao}")
