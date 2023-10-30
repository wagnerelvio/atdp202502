linhas = int(input("Digite o número de linhas da matriz: "))
colunas = int(input("Digite o número de colunas da matriz: "))

matriz = []

# Solicitando os elementos da matriz
for i in range(linhas):
    linha = []
    for j in range(colunas):
        elemento = int(input(f"Digite o valor para a posição [{i}][{j}]: "))
        linha.append(elemento)
    matriz.append(linha)

# Exibindo a matriz inserida
print("A matriz inserida é:")
for i in range(linhas):
    for j in range(colunas):
        print(matriz[i][j], end=" ")
    print()
