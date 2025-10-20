def calcular_novo_salario(salario):
    if salario <= 1000.00:
        percentual = 0.50
    elif salario <= 2000.00:
        percentual = 0.45
    elif salario <= 3000.00:
        percentual = 0.40
    elif salario <= 4500.00:
        percentual = 0.35
    elif salario <= 6000.00:
        percentual = 0.30
    elif salario <= 7500.00:
        percentual = 0.25
    elif salario <= 10000.00:
        percentual = 0.20
    elif salario <= 15000.00:
        percentual = 0.15
    elif salario <= 20000.00:
        percentual = 0.10
    elif salario <= 25000.00:
        percentual = 0.08
    else:
        percentual = 0.05

    return salario + (salario * percentual), percentual

def main():
    while True:
        try:
            salario = float(input("\nDigite o salario atual: R$ "))
        except ValueError:
            print("Entrada inválida! Digite um número válido.")
            continue

        novo_salario, percentual = calcular_novo_salario(salario)

        print(f"Percentual aplicado: {percentual * 100:.0f}%")
        print(f"Novo salario com aumento: R$ {novo_salario:.2f}")

        opcao = input("\nDeseja calcular outro salario? (S/N): ").strip().lower()
        if opcao != 's':
            break

    print("\nPrograma encerrado. Obrigado!")

if __name__ == "__main__":
    main()
