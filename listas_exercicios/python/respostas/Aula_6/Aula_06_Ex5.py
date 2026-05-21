forcas = [("FL", 120),
          ("FR", 110),
          ("RL", 130),
          ("RR", 115)]

pernas = len (forcas)
forca_total = 0

for i in range (pernas):
    forca_total += forcas [i][1]

forca_media = forca_total / pernas

print (f"A força média exercida pelas pernas é de: {forca_media}")

perna_forte = forcas [0][0]
forca_perna = forcas [0][1]

for i in range (pernas):
    
    if (forcas [i][1] > forca_perna):
        perna_forte = forcas [i][0]
        forca_perna = forcas [i][1]
        
print (f"""Perna com maior força: {perna_forte}
Valor: {forca_perna}""")