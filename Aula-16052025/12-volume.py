import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection

def volume_sapata_retangular(b, l, h): 
    return b * l * h

try:
    b = float(input("Informe a largura da sapata (m): "))
    l = float(input("Informe o comprimento da sapata (m): "))
    h = float(input("Informe a altura/espessura da sapata (m): "))

    V = volume_sapata_retangular(b, l, h)
    print(f"Volume da sapata retangular: {V:.2f} m³")

    # Desenho 3D
    fig = plt.figure(figsize=(8, 6))
    ax = fig.add_subplot(111, projection='3d')

    x = [0, b, b, 0, 0, b, b, 0]
    y = [0, 0, l, l, 0, 0, l, l]
    z = [0, 0, 0, 0, h, h, h, h]

    verts = [
        [0, 1, 2, 3], [4, 5, 6, 7],
        [0, 1, 5, 4], [1, 2, 6, 5],
        [2, 3, 7, 6], [3, 0, 4, 7]
    ]
    faces = [[(x[i], y[i], z[i]) for i in face] for face in verts]

    ax.add_collection3d(Poly3DCollection(faces, facecolors='sandybrown', edgecolors='black', alpha=0.9))
    ax.set_xlim(0, b + 1)
    ax.set_ylim(0, l + 1)
    ax.set_zlim(0, h + 1)
    ax.set_xlabel('Largura (m)')
    ax.set_ylabel('Comprimento (m)')
    ax.set_zlabel('Altura (m)')
    ax.set_title('Sapata Retangular')

    plt.tight_layout()
    plt.show()

except ValueError:
    print("Por favor, insira valores numéricos válidos.")
