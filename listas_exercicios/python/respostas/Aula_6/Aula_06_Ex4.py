leituras = [("Lidar", 2.3),
            ("Ultrassom", 1.8),
            ("IR", 0.9)]

for obstaculo in leituras:
    print(f"Sensor: {obstaculo[0]}, Distância: {obstaculo[1]}")

sensor = leituras[0][0]
distancia = leituras[0][1]

for obstaculo in leituras:
    
    if (obstaculo [1] < distancia):
        distancia = obstaculo [1]
        sensor = obstaculo [0]

print (f"O obstáculo mais próximo foi detectado pelo sensor {sensor} e estava a {distancia} m.")