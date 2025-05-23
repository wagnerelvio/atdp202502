def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

# Solicita ao usuário o valor de n
try:
    n = int(input("Digite um número inteiro n para calcular Fibonacci(n): "))
    if n < 0:
        print("Por favor, insira um número inteiro não negativo.")
    else:
        resultado = fibonacci(n)
        print(f"Fibonacci({n}) = {resultado}")
except ValueError:
    print("Entrada inválida. Por favor, digite um número inteiro.")
