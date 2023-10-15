def fahrenheit_para_celsius(fahrenheit):
    celsius = (fahrenheit - 32) * 5/9
    return celsius

# Solicita ao usuário que insira a temperatura em Fahrenheit
fahrenheit = float(input("Digite a temperatura em graus Fahrenheit: "))

# Converte de Fahrenheit para Celsius
celsius = fahrenheit_para_celsius(fahrenheit)

# Exibe o resultado
print(f"A temperatura em graus Celsius é: {celsius:.2f}")
