'''
Calculo do volume de um cilindro.
V.02
'''

import math
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Entrada de dados pelo usuário
raio = float(input("Digite o raio do cilindro (cm): "))
altura = float(input("Digite a altura do cilindro (cm): "))

# Cálculo do volume
volume = math.pi * raio**2 * altura
print(f"Volume do cilindro: {volume:.2f} cm³")

# Criação da malha para o cilindro
theta = np.linspace(0, 2 * np.pi, 50)
z = np.linspace(0, altura, 50)
Theta, Z = np.meshgrid(theta, z)
X = raio * np.cos(Theta)
Y = raio * np.sin(Theta)

# Plotagem 3D
fig = plt.figure(figsize=(6,8))
ax = fig.add_subplot(111, projection='3d')

# Superfície lateral do cilindro
ax.plot_surface(X, Y, Z, color='skyblue', alpha=0.7)

# Bases do cilindro
ax.plot_surface(X, Y, np.zeros_like(Z), color='blue', alpha=0.5)       # base inferior
ax.plot_surface(X, Y, altura * np.ones_like(Z), color='blue', alpha=0.5) # base superior

ax.set_xlabel('X (cm)')
ax.set_ylabel('Y (cm)')
ax.set_zlabel('Altura (cm)')
ax.set_title('Volume do Cilindro')

plt.show()
