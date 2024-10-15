# Solicita ao usuário a temperatura informada
temperatura = float(input("Digite a temperatura: "))

# Verifica os intervalos de temperatura
if temperatura < 40:
    print("Severidade: RISCO MUITO BAIXO")
elif 40 <= temperatura < 60:
    print("Severidade: RISCO BAIXO")
elif 60 <= temperatura < 80:
    print("Severidade: *** ALERTA ***")
elif 80 <= temperatura < 120:
    print("Severidade: RISCO MÉDIO")
elif 120 <= temperatura < 170:
    print("Severidade: RISCO MODERADO–ALERTA AMARELO")
elif 170 <= temperatura < 200:
    print("Severidade: RISCO ALTO–ALERTA LARANJA")
elif temperatura >= 200:
    print("Severidade: RISCO MUITO ALTO–ALERTA VERMELHO")
else:
    print("Erro: Temperatura fora dos intervalos esperados.")

