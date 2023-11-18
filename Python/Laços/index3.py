# Usando for
for andar in range(1, 21):
    if andar != 13:
        print(andar)

# Usando while
andar = 1
while andar <= 20:
    if andar != 13:
        print(andar)
    andar += 1
    
# Em ordem decrescente usando for:
for andar in range(20, 0, -1):
    if andar != 13:
        print(andar)
        
# Em ordem decrescente usando while:
andar = 20
while andar >= 1:
    if andar != 13:
        print(andar)
    andar -= 1