def celsius_para_fahrenheit(celsius):
    fahrenheit = (celsius * 9/5) + 32
    return fahrenheit

def fahrenheit_para_celsius(fahrenheit):
    celsius = (fahrenheit - 32) * 5/9
    return celsius

# Função para escolher e realizar a conversão
def converter_temperatura():
    escolha = int(input("Escolha a conversão desejada:\n1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\n"))
    
    if escolha == 1:
        celsius = float(input("Digite a temperatura em graus Celsius: "))
        resultado = celsius_para_fahrenheit(celsius)
        print(f"A temperatura em graus Fahrenheit é: {resultado:.2f}")
    elif escolha == 2:
        fahrenheit = float(input("Digite a temperatura em graus Fahrenheit: "))
        resultado = fahrenheit_para_celsius(fahrenheit)
        print(f"A temperatura em graus Celsius é: {resultado:.2f}")
    else:
        print("Escolha inválida.")

# Chama a função para converter a temperatura
converter_temperatura()
