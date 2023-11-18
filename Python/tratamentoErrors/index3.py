def validar():
  valido = False

  while valido == False:

    try:
      num = int(input("Escreva um número par que seja divisível por 3"))
      if num % 2 != 0:
        print("Essa foi péssima!  " + str(num) +" é impar" )
      elif num %3 != 0:
        print("Quase lá! " + str(num) + " é par, porém não é divisível por 3")
      else:
        print(str(num) + " Parabéns! " + str(num) + " é um número par divisível por 3")
        valido = True
    except:
      print("Tente outra vez! Escreva um número par que também seja divisível por 3")

validar()