def celsius_para_fahrenheit(celsius):
    fahrenheit = (celsius * 9/5) + 32
    return fahrenheit

def fahrenheit_para_celsius(fahrenheit):
    celsius = (fahrenheit - 32) * 5/9
    return celsius

def celsius_para_kelvin(celsius):
    kelvin = celsius + 273.15
    return kelvin

def kelvin_para_celsius(kelvin):
    celsius = kelvin - 273.15
    return celsius

def fahrenheit_para_kelvin(fahrenheit):
    celsius = fahrenheit_para_celsius(fahrenheit)
    kelvin = celsius_para_kelvin(celsius)
    return kelvin

def kelvin_para_fahrenheit(kelvin):
    celsius = kelvin_para_celsius(kelvin)
    fahrenheit = celsius_para_fahrenheit(celsius)
    return fahrenheit

# Função para escolher e realizar a conversão
def converter_temperatura():
    escolha = int(input("Escolha a conversão desejada:\n1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\n3. Celsius para Kelvin\n4. Kelvin para Celsius\n5. Fahrenheit para Kelvin\n6. Kelvin para Fahrenheit\n"))
    
    if escolha == 1:
        celsius = float(input("Digite a temperatura em graus Celsius: "))
        resultado = celsius_para_fahrenheit(celsius)
        print(f"A temperatura em graus Fahrenheit é: {resultado:.2f}")
    elif escolha == 2:
        fahrenheit = float(input("Digite a temperatura em graus Fahrenheit: "))
        resultado = fahrenheit_para_celsius(fahrenheit)
        print(f"A temperatura em graus Celsius é: {resultado:.2f}")
    elif escolha == 3:
        celsius = float(input("Digite a temperatura em graus Celsius: "))
        resultado = celsius_para_kelvin(celsius)
        print(f"A temperatura em Kelvin é: {resultado:.2f}")
    elif escolha == 4:
        kelvin = float(input("Digite a temperatura em Kelvin: "))
        resultado = kelvin_para_celsius(kelvin)
        print(f"A temperatura em graus Celsius é: {resultado:.2f}")
    elif escolha == 5:
        fahrenheit = float(input("Digite a temperatura em graus Fahrenheit: "))
        resultado = fahrenheit_para_kelvin(fahrenheit)
        print(f"A temperatura em Kelvin é: {resultado:.2f}")
    elif escolha == 6:
        kelvin = float(input("Digite a temperatura em Kelvin: "))
        resultado = kelvin_para_fahrenheit(kelvin)
        print(f"A temperatura em graus Fahrenheit é: {resultado:.2f}")
    else:
        print("Escolha inválida.")

# Chama a função para converter a temperatura
converter_temperatura()
