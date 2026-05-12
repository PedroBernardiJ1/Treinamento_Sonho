P = 500

for i in range (50):
    
    print (f"Número de indivíduos no instante {i}: {P:.0f}")
    
    P = P + (0.03 * P) - 10
    
    if (P > 1000):
        break

print (f"Número de indivíduos no instante {i + 1}: {P:.0f}")