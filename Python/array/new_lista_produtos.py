lista_produtos = ['máscaras faciais', 'batons', 'esmaltes', 'perfumes', 'loções', 'xampus', 'sabonetes', 'delineadores'] 

lista_produtos[1] = 'rímel'  
lista_produtos[4] = 'cremes hidratantes'  
lista_produtos.remove('delineadores')  

lista_produtos.append('pó compacto')
lista_produtos.append('protetor solar')

print("Lista atualizada de produtos:")
for produto in lista_produtos:
    print(f'Temos {produto} à venda!')