'''
Fibonacci com visualização gráfica (gráfico de barras)
'''
import matplotlib.pyplot as plt

def fibonacci(n):
    seq = [0, 1]
    for _ in range(2, n):
        seq.append(seq[-1] + seq[-2])
    return seq[:n]

valores = fibonacci(10)
plt.bar(range(10), valores)
plt.title("Fibonacci até o 10º termo")
plt.xlabel("n")
plt.ylabel("Fibonacci(n)")
plt.show()

