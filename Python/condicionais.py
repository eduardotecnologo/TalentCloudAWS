sobremesa_favorita = "Pudim"
bebida_preco = 9.99
almoco_preco = 18.99
orcamento = 20.00
convidados = 4
sobremesa_preco = 18.99

novo_total = (almoco_preco * 4) + (bebida_preco * 3) + (sobremesa_preco * 2)
print(novo_total)

valor_por_pessoa = novo_total / convidados
print(valor_por_pessoa)

if(orcamento > valor_por_pessoa):
    print("Consigo pagar!!!")
else:
    print("Tô sem grana!!!")