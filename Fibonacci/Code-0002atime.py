from tqdm import tqdm
import time

'''
Fibonacci com recursão (ineficiente para grandes n)
com barra de progresso
'''

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

# Exemplo
n = 20
print(f"Cálculo dos {n} primeiros números de Fibonacci (recursivo):")

for i in tqdm(range(n), desc="Processando", ncols=70):
    fib = fibonacci(i)
    print(fib, end=' ')
    time.sleep(0.1)  # apenas para visualizar melhor o progresso
