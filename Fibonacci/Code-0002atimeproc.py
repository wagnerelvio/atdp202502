from concurrent.futures import ProcessPoolExecutor, as_completed
from tqdm import tqdm
import time
import os

'''
Fibonacci recursivo com paralelização (uso de múltiplos núcleos)
e barra de progresso (tqdm)
'''

# Função recursiva (ineficiente, mas paralelizável)
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

if __name__ == "__main__":
    n = 25  # até 25 é viável, acima disso fica exponencial
    num_cpus = os.cpu_count()
    print(f"\nCalculando os {n} primeiros números de Fibonacci usando {num_cpus} CPUs...\n")

    inicio = time.time()

    # Cria um pool de processos
    with ProcessPoolExecutor() as executor:
        # Envia as tarefas
        futuros = {executor.submit(fibonacci, i): i for i in range(n)}

        # Barra de progresso
        resultados = []
        for futuro in tqdm(as_completed(futuros), total=len(futuros), desc="Processando", ncols=80):
            resultados.append(futuro.result())

    fim = time.time()

    # Ordena os resultados (pois as tarefas terminam fora de ordem)
    resultados_ordenados = [x for _, x in sorted(zip(futuros.values(), resultados))]

    print("\nSequência de Fibonacci:")
    print(resultados_ordenados)
    print(f"\nTempo total de execução: {fim - inicio:.2f} segundos.")
