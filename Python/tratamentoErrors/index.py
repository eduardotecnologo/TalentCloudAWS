def mostrarNumero():
    print("Escreva um número menor que 100")
    numero_valido = False

    while numero_valido == False:
        try:
            num = int(input())
            if num > 100:
                print("O número precisa ser menor ou igual a 100 ")
            elif num < 0:
                print("O número precisa maior que 0 ")
            else:
                print("Boa! Você escolheu o número: " + str(num))
                numero_valido = True
        except:
            print("Precisa digitar um número inteiro.")
    
    mostrarNumero()

## Verificar se o número é < 0 e > 100