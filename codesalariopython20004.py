
# Solicita ao usuário o salário atual
salario = float(input("Digite o salário atual: R$ "))

# Verifica os intervalos salariais e atribui o percentual correspondente
if salario <= 1000.00:
    percentual = 50
elif salario > 1000.00 and salario <= 2000.00:
    percentual = 45
elif salario > 2000.00 and salario <= 3000.00:
    percentual = 40
elif salario > 3000.00 and salario <= 4500.00:
    percentual = 35
elif salario > 4500.00 and salario <= 5000.00:
    percentual = 30
elif salario > 5000.00 and salario <= 7500.00:
    percentual = 25
elif salario > 7500.00 and salario <= 10000.00:
    percentual = 20
elif salario > 10000.00 and salario <= 15000.00:
    percentual = 15
elif salario > 15000.00 and salario <= 20000.00:
    percentual = 10
elif salario > 20000.00 and salario <= 25000.00:
    percentual = 8
else:
    percentual = 5

# Calcula o novo salário com o aumento percentual
novo_salario = salario + (salario * percentual / 100)

# Exibe o percentual de aumento e o novo salário
print(f"Percentual de aumento: {percentual}%")
print(f"Novo salário: R$ {novo_salario:.2f}")
