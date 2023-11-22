def achar_elemento(elem, arr):
    achou = False
    
    for i in range(len(arr)):
        if arr[i] == elem:
            achou = True
            
    if(achou == False):
        print('Não achamos o nome! ' + elem)
    else:
        print('Achamos o nome: ' + elem)
        
    nomes = ['Eduardo','Alexandre','Lucio', 'Silva']
    achar_elemento('Suellen', nomes)