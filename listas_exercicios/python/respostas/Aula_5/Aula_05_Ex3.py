idade = int (input ("Digite sua idade: "))

if (idade < 0):
    print ("Idade inválida!")

elif (idade <= 12):
    print (f"Você é uma criança, de {idade} anos!")

elif (13 <= idade <= 17):
    print (f"Você é um adolescente, de {idade} anos!")

elif (18 <= idade <= 59):
    print (f"Você é um adulto, de {idade} anos!")

else:
    print (f"Você é um idoso, de {idade} anos!")