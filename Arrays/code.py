'''
code-0001
'''
import numpy as np
import random

# Gerando nomes aleatórios fictícios
nomes = [f"Aluno{i+1}" for i in range(20)]

# Gerando 20 notas aleatórias entre 0 e 10
notas = np.round(np.random.uniform(0, 10, size=20), 1)

# Estatísticas
media = np.mean(notas)
mediana = np.median(notas)
desvio = np.std(notas)

# Classificação
status = ["Aprovado" if nota >= 7 else "Reprovado" for nota in notas]

# Exibição
for nome, nota, situacao in zip(nomes, notas, status):
    print(f"{nome}: Nota = {nota} → {situacao}")

'''================= '''
'''
Code-000222
'''
import numpy as np
import random

nomes = [f"Aluno{i+1}" for i in range(20)]
notas = np.round(np.random.uniform(0, 10, size=20), 1)

media = np.mean(notas)
mediana = np.median(notas)
desvio = np.std(notas)

status = ["Aprovado" if nota >= 7 else "Reprovado" for nota in notas]

for nome, nota, situacao in zip(nomes, notas, status):
    print(f"{nome}: Nota = {nota} → {situacao}")
'''
===============================
Code-000333
'''
import numpy as np
import random
from scipy import stats

# Gera nomes fictícios
nomes = [f"Aluno{i+1}" for i in range(20)]

# Gera notas aleatórias entre 0 e 10
notas = np.round(np.random.uniform(0, 10, size=20), 1)

# Calcula estatísticas
media = np.mean(notas)
mediana = np.median(notas)
desvio = np.std(notas)
moda = stats.mode(notas, keepdims=True).mode[0]

# Classificação
status = ["Aprovado" if nota >= 7 else "Reprovado" for nota in notas]

# Impressão dos resultados
print("=== Estatísticas ===")
print(f"Média: {media:.2f}")
print(f"Mediana: {mediana:.2f}")
print(f"Desvio Padrão: {desvio:.2f}")
print(f"Moda: {moda:.2f}\n")

# Impressão por aluno
print("=== Classificação dos Alunos ===")
for nome, nota, situacao in zip(nomes, notas, status):
    print(f"{nome}: Nota = {nota:.1f} → {situacao}")

'''
===============================

# Code-03
'''

import numpy as np
import random
from scipy import stats

# Gera nomes fictícios
nomes = [f"Aluno{i+1}" for i in range(20)]

# Gera notas aleatórias entre 0 e 10
notas = np.round(np.random.uniform(0, 10, size=20), 1)

# Calcula estatísticas
media = np.mean(notas)
mediana = np.median(notas)
desvio = np.std(notas)
moda = stats.mode(notas, keepdims=True).mode[0]

# Classificação
status = ["Aprovado" if nota >= 7 else "Reprovado" for nota in notas]

# Impressão dos resultados
print("=== Estatísticas ===")
print(f"Média: {media:.2f}")
print(f"Mediana: {mediana:.2f}")
print(f"Desvio Padrão: {desvio:.2f}")
print(f"Moda: {moda:.2f}\n")

# Impressão por aluno
print("=== Classificação dos Alunos ===")
for nome, nota, situacao in zip(nomes, notas, status):
    print(f"{nome}: Nota = {nota:.1f} → {situacao}")

'''
================================

Code-04
'''
import numpy as np
import random
from scipy import stats

# Gera nomes fictícios
nomes = [f"Aluno{i+1}" for i in range(20)]

# Gera notas aleatórias entre 0 e 10
notas = np.round(np.random.uniform(0, 10, size=20), 1)

# Calcula estatísticas
media = np.mean(notas)
mediana = np.median(notas)
desvio = np.std(notas)
moda = stats.mode(notas, keepdims=True).mode[0]

# Classificação
status = ["Aprovado" if nota >= 7 else "Reprovado" for nota in notas]

# Impressão dos resultados
print("=== Estatísticas ===")
print(f"Média: {media:.2f}")
print(f"Mediana: {mediana:.2f}")
print(f"Desvio Padrão: {desvio:.2f}")
print(f"Moda: {moda:.2f}\n")

# Impressão por aluno
print("=== Classificação dos Alunos ===")
for nome, nota, situacao in zip(nomes, notas, status):
    print(f"{nome}: Nota = {nota:.1f} → {situacao}")

'''
===============================

Code-04 Matplotlib

'''



import numpy as np
import matplotlib.pyplot as plt
from scipy import stats

# Dados
nomes = [f"Aluno{i+1}" for i in range(20)]
notas = np.round(np.random.uniform(0, 10, size=20), 1)

# Estatísticas
media = np.mean(notas)
mediana = np.median(notas)
desvio = np.std(notas)
moda = stats.mode(notas, keepdims=True).mode[0]

# Gráfico
plt.figure(figsize=(12, 6))
plt.bar(nomes, notas, color='skyblue', edgecolor='black')
plt.axhline(media, color='red', linestyle='--', label=f'Média = {media:.2f}')
plt.axhline(mediana, color='green', linestyle='--', label=f'Mediana = {mediana:.2f}')
plt.axhline(moda, color='orange', linestyle='--', label=f'Moda = {moda:.2f}')
plt.axhline(media + desvio, color='purple', linestyle=':', label=f'Média + DP = {media + desvio:.2f}')
plt.axhline(media - desvio, color='purple', linestyle=':', label=f'Média - DP = {media - desvio:.2f}')

plt.title("Notas dos Alunos com Indicadores Estatísticos")
plt.xlabel("Alunos")
plt.ylabel("Notas")
plt.ylim(0, 10)
plt.xticks(rotation=45)
plt.legend()
plt.tight_layout()
plt.grid(axis='y', linestyle=':', alpha=0.7)
plt.show()
