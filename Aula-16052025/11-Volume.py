def volume_sapata_retangular(b, l, h):
    """
    Calcula o volume da sapata retangular/quadrada.
    b: largura (m)
    l: comprimento (m)
    h: altura/espessura (m)
    retorna: volume (m³)
    """
    return b * l * h

# Exemplo de uso:
b = 2.0  # metros
l = 3.0  # metros
h = 0.5  # metros
V = volume_sapata_retangular(b, l, h)
print(f"Volume da sapata retangular: {V} m³")
