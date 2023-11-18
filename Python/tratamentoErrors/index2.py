def divisivel_por_2_e_3_(numero):
    while numero % 2 != 0 or numero % 3 != 0:
        print("O número " + str(numero) + " não é divisível por 2 e 3.")
        numero = int(input("Digite outro número: "))
    
    print("Parabéns! Você digitou " + str(numero) + " ,número correto.")

numero_inicial = int(input("Digite um número: "))
divisivel_por_2_e_3_(numero_inicial)
