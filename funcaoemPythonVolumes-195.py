import math

# Função para calcular o volume de uma esfera
def calcular_volume_esfera(raio):
    return (4.0/3.0) * math.pi * raio**3

# Função para calcular o volume de uma pirâmide
def calcular_volume_piramide(base, altura):
    return (1.0/3.0) * base * altura

# Função para calcular o volume de um cone
def calcular_volume_cone(raio, altura):
    return (1.0/3.0) * math.pi * raio**2 * altura

# Função para calcular o volume de um cubo
def calcular_volume_cubo(aresta):
    return aresta**3

# Função principal
def main():
    escolha = int(input("Escolha a forma para calcular o volume:\n1. Esfera\n2. Pirâmide\n3. Cone\n4. Cubo\n"))
    
    if escolha == 1:
        raio = float(input("Digite o raio da esfera: "))
        volume = calcular_volume_esfera(raio)
        print(f"O volume da esfera é: {volume:.2f}")
    elif escolha == 2:
        base = float(input("Digite a base da pirâmide: "))
        altura = float(input("Digite a altura da pirâmide: "))
        volume = calcular_volume_piramide(base, altura)
        print(f"O volume da pirâmide é: {volume:.2f}")
    elif escolha == 3:
        raio = float(input("Digite o raio do cone: "))
        altura = float(input("Digite a altura do cone: "))
        volume = calcular_volume_cone(raio, altura)
        print(f"O volume do cone é: {volume:.2f}")
    elif escolha == 4:
        aresta = float(input("Digite o tamanho da aresta do cubo: "))
        volume = calcular_volume_cubo(aresta)
        print(f"O volume do cubo é: {volume:.2f}")
    else:
        print("Escolha inválida.")

if __name__ == "__main__":
    main()
