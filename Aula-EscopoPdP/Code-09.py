'''
Passagem de Parâmetros em Python (comparativo)
'''
def alterar_lista(lista):
    lista.append(100)

def alterar_numero(x):
    x = x + 1
    print("Dentro:", x)

L = [1, 2, 3]
n = 10

alterar_lista(L)
alterar_numero(n)

print("Lista:", L) # foi alterada
print("Numero:", n) # nao foi alterado