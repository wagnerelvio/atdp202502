# Listar os numeros da Serie de Fibonacci
def fibonacci_iterativo(n):
    fib = [0, 1]
    for i in range(2, n):
        next_term = fib[i - 1] + fib[i - 2]
        fib.append(next_term)
    return fib

n = int(input("Digite o valor de n para calcular os numeros da serie de  Fibonacci: "))
resultado = fibonacci_iterativo(n)
print(f"\nOs valores da serie de  Fibonacci sao: \n \n {resultado}.") 
