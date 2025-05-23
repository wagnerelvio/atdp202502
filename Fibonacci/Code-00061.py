import matplotlib.pyplot as plt

def fibonacci(n):
    seq = [0, 1]
    for _ in range(2, n):
        seq.append(seq[-1] + seq[-2])
    return seq[:n]

# Entrada do usuário
try:
    n = int(input("Digite o número de termos da sequência de Fibonacci: "))
    if n <= 0:
        print("Por favor, insira um número inteiro positivo.")
    else:
        valores = fibonacci(n)
        plt.bar(range(n), valores)
        plt.title(f"Fibonacci até o {n}º termo")
        plt.xlabel("n")
        plt.ylabel("Fibonacci(n)")
        plt.show()
except ValueError:
    print("Entrada inválida. Por favor, digite um número inteiro.")
