# Hecho con chatGPT

import cv2
import numpy as np

# Cargar la imagen
image_path = 'example.png'
image = cv2.imread(image_path)

# Coordenadas de los píxeles centrales de las casillas
cell_centers = [(i * image.shape[0] // 5 + image.shape[0] // 10, j * image.shape[1] // 11 + image.shape[1] // 22)
                for i in range(5) for j in range(11)]

# Crear una lista de colores únicos y una matriz para almacenar los valores numéricos
unique_colors = []
color_matrix = np.zeros((5, 11), dtype=int)

# Procesar cada pixel central de las casillas
for idx, (x, y) in enumerate(cell_centers):
    cell_rgb = image[x, y]

    if cell_rgb.tolist() not in unique_colors:
        unique_colors.append(cell_rgb.tolist())

    color_index = unique_colors.index(cell_rgb.tolist()) + 1
    row = idx // 11
    col = idx % 11
    color_matrix[row, col] = color_index

print("Colores únicos detectados:")
for index, color in enumerate(unique_colors):
    print(f"Color {index + 1}: RGB{color}")

print("\nMatriz de colores:")
print(color_matrix)
