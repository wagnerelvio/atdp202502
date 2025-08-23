'''
Cálculo de numeros primos sem paralelismo

'''
import time
from tqdm import tqdm  # barra de progresso

def eh_primo(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

inicio = time.time()
primos = []

# Intervalo grande para demorar um tempo considerável
for numero in tqdm(range(2, 10_000_000), desc="Calculando primos"):
    if eh_primo(numero):
        primos.append(numero)

fim = time.time()
print(f"Quantidade de primos encontrados: {len(primos)}")
print(f"Tempo de execução: {fim - inicio:.2f} segundos")
