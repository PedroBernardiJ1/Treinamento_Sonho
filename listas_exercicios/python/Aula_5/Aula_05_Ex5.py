a = float (input ("Digite o valor do primeiro lado do triângulo:"))
b = float (input ("Digite o valor do segundo lado do triângulo:"))
c = float (input ("Digite o valor do terceiro lado do triângulo:"))

if (a + b > c) and (a + c > b) and (b + c > a):
    if (a == b == c):
        print ("Os lados formam um triângulo equilátero!")
    
    elif (a != b) and (a != c) and (b != c):
        print ("Os lados formam um triângulo escaleno!")
    
    else:
        print ("Os lados formam um triângulo isósceles!")

else:
    print ("Os lados NÃO formam um triângulo!")
