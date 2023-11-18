def func():
    PESO_MINIMO = 3.500
    PESO_MAXIMO = 6.000

    qtd_rodas = int(input("Digite o número de rodas: "))

    try:
        peso_bruto = float(input("Digite o peso bruto em quilogramas: "))
    except ValueError:
        print("Erro: Certifique-se de digitar um número válido para o peso bruto.")
        return

    qtd_pessoas = int(input("Digite a quantidade de pessoas no veículo: "))

    if 2 <= qtd_rodas <= 3:
        print("Categoria A")
    elif qtd_rodas == 4 and qtd_pessoas <= 8 and peso_bruto <= PESO_MINIMO:
        print("Categoria B")
    elif qtd_rodas >= 4 and peso_bruto <= PESO_MAXIMO:
        print("Categoria C")
    elif qtd_rodas >= 4 and qtd_pessoas > 8:
        print("Categoria D")
    elif qtd_rodas >= 4 and peso_bruto > PESO_MAXIMO:
        print("Categoria E")
    else:
        print("Categoria inválida")

func()
