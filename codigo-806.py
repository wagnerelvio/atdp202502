# Solicitar ao usuário que insira três números
num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))
num3 = int(input("Digite o terceiro número: "))

# Usar a função min() para encontrar o menor número
menor = min(num1, num2, num3)

# Imprimir o resultado
print(f"O menor número é: {menor}")
