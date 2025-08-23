'''
Processadores no notebook
'''
import os
import psutil

# Número de núcleos lógicos (inclui hyperthreading)
print("Núcleos lógicos (threads):", os.cpu_count())
print("Núcleos lógicos (psutil):", psutil.cpu_count(logical=True))

# Número de núcleos físicos
print("Núcleos físicos:", psutil.cpu_count(logical=False))
