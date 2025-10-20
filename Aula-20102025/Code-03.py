'''
'''
def avaliar_temperatura(temperatura):
    if temperatura < 40:
        print("Severidade: RISCO MUITO BAIXO")
    elif 40 <= temperatura < 60:
        print("Severidade: RISCO BAIXO")
    elif 60 <= temperatura < 80:
        print("Severidade: *** ALERTA ***")
    elif 80 <= temperatura < 120:
        print("Severidade: RISCO MÉDIO")
    elif 120 <= temperatura < 170:
        print("Severidade: RISCO MODERADO — ALERTA AMARELO")
    elif 170 <= temperatura < 200:
        print("Severidade: RISCO ALTO — ALERTA LARANJA")
    else:
        print("Severidade: RISCO MUITO ALTO — ALERTA VERMELHO")


def main():
    while True:
        print("\n--------------------------------------")
        try:
            temperatura = float(input("Informe a temperatura: "))
        except ValueError:
            print("Entrada inválida! Digite um número.")
            continue

        avaliar_temperatura(temperatura)

        opcao = input("\nDeseja informar outra temperatura? (S/N): ").strip().lower()
        if opcao != 's':
            break

    print("\nPrograma encerrado. Obrigado!")


if __name__ == "__main__":
    main()
