numero = int(input ("Digite um número de 3 dígitos: "))


centena_conv = 100
c = numero // centena_conv
numero2 = numero % centena_conv
        
dezena_conv = 10
d = numero2 // dezena_conv

u = numero2 % dezena_conv

print ("Dígito 1 (centena): ", c)
print ("Dígito 2 (dezena): ", d)
print ("Dígito 3 (unidade): ", u)