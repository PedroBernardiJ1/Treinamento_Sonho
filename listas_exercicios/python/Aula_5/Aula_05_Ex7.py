x = 1.0              # chute inicial
tol = 1e-6           # tolerância
max_iter = 100       # número máximo de iterações

iteracao = 0

for i in range (max_iter):
    x = x - (x ** 2 - 2) / (2 * x)
    iteracao += 1
    
    if (abs(x**2 - 2) < tol):
        break

print(f"Raiz aproximada: {x}")
print(f"Número de iterações: {iteracao}")
