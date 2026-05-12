numero_1 = float (input ("Digite o dividendo: "))
numero_2 = float (input ("Digite o divisor: "))

if (numero_2 == 0):
    print ("Divisão inválida! Não é possível dividr por zero")

else:
    resultado = numero_1 / numero_2
    print (f"O resultado da divisão é: {resultado}")