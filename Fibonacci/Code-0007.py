'''
Fibonacci com expressão de Binet (fórmula fechada)
'''

import math

def fibonacci_binet(n):
    phi = (1 + math.sqrt(5)) / 2
    return round((phi**n - (-1/phi)**n) / math.sqrt(5))

# Exemplo
for i in range(10):
    print(fibonacci_binet(i), end=' ')
