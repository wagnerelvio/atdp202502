import math

# Função para calcular a área de um quadrado
def calcular_area_quadrado(lado):
    return lado**2

# Função para calcular a área de um triângulo retângulo
def calcular_area_triangulo_retangulo(base, altura):
    return 0.5 * base * altura

# Função para calcular a área de um trapézio
def calcular_area_trapezio(base_maior, base_menor, altura):
    return 0.5 * (base_maior + base_menor) * altura

# Função para calcular a área de uma circunferência
def calcular_area_circunferencia(raio):
    return math.pi * raio**2

# Função principal
def main():
    escolha = int(input("Escolha a forma para calcular a área:\n1. Quadrado\n2. Triângulo Retângulo\n3. Trapézio\n4. Circunferência\n"))
    
    if escolha == 1:
        lado = float(input("Digite o lado do quadrado: "))
        area = calcular_area_quadrado(lado)
        print(f"A área do quadrado é: {area:.2f}")
    elif escolha == 2:
        base = float(input("Digite a base do triângulo retângulo: "))
        altura = float(input("Digite a altura do triângulo retângulo: "))
        area = calcular_area_triangulo_retangulo(base, altura)
        print(f"A área do triângulo retângulo é: {area:.2f}")
    elif escolha == 3:
        base_maior = float(input("Digite a base maior do trapézio: "))
        base_menor = float(input("Digite a base menor do trapézio: "))
        altura = float(input("Digite a altura do trapézio: "))
        area = calcular_area_trapezio(base_maior, base_menor, altura)
        print(f"A área do trapézio é: {area:.2f}")
    elif escolha == 4:
        raio = float(input("Digite o raio da circunferência: "))
        area = calcular_area_circunferencia(raio)
        print(f"A área da circunferência é: {area:.2f}")
    else:
        print("Escolha inválida.")

if __name__ == "__main__":
    main()
