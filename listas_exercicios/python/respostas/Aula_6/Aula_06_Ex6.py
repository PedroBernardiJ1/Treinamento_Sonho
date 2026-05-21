estimado = [(0,0), (1,1), (2,2), (3,3)]
real = [(0,0), (1,0.8), (2.2,2.1), (2.9,3.2)]

distancia_x = 0
distancia_y = 0
distancia_total = 0
distancias = []

for i in range (len(estimado)):
    distancia_x = abs (estimado [i][0] - real[i][0])
    distancia_y = abs (estimado [i][1] - real[i][1])
    distancia_total = round ((((distancia_x ** 2) + (distancia_y ** 2)) ** (1/2)), 2)
    distancias.append (distancia_total)

print (distancias)
