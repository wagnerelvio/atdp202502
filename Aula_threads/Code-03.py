'''
Cálculo de numeros primos com paralelismo

'''
import time
from multiprocessing import Pool, cpu_count
from tqdm import tqdm


# Função que verifica se um número é primo
def eh_primo(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True


# Função para checar todos os primos em um intervalo (bloco)
def checar_primos_intervalo(intervalo):
    return [n for n in intervalo if eh_primo(n)]


if __name__ == "__main__":
    numeros = list(range(2, 10_000_000))

    # ===== Código sequencial =====
    inicio_seq = time.time()
    primos_seq = []
    for n in numeros:
        if eh_primo(n):
            primos_seq.append(n)
    fim_seq = time.time()
    print(f"Sequencial: {len(primos_seq)} primos encontrados em {fim_seq - inicio_seq:.2f} s")

    # ===== Código paralelo otimizado =====
    inicio_par = time.time()
    num_processos = cpu_count()
    tamanho_bloco = len(numeros) // num_processos
    blocos = [numeros[i * tamanho_bloco: (i + 1) * tamanho_bloco] for i in range(num_processos)]

    primos_par = []
    with Pool(num_processos) as pool:
        for resultado in tqdm(pool.imap(checar_primos_intervalo, blocos), total=len(blocos), desc="Paralelo"):
            primos_par.extend(resultado)

    fim_par = time.time()
    print(f"Paralelo: {len(primos_par)} primos encontrados em {fim_par - inicio_par:.2f} s")
