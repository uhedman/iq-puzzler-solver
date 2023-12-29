# Hecho con chatGPT
import cv2
import numpy as np

letters = "vcaqpbmjgzrfn"

for i in range(1,5):
    # Cargar la imagen
    image_path = f'puzzle{i}.png'
    image = cv2.imread(image_path)

    # Coordenadas de los píxeles centrales de las casillas
    cell_centers = [(i * image.shape[0] // 5 + image.shape[0] // 10, j * image.shape[1] // 11 + image.shape[1] // 22)
                    for i in range(5) for j in range(11)]

    # Crear una lista de colores únicos y una matriz para almacenar los valores numéricos
    unique_colors = [[105, 155, 0], [247, 215, 141], [1, 220, 255], [191, 203, 123], 
                     [144, 41, 128], [46, 40, 183], [62, 198, 139], [179, 102, 1], 
                     [85, 79, 88], [239, 174, 0], [35, 29, 238], [171, 113, 241], [29, 147, 247]]
    color_matrix = np.zeros((5, 11), dtype=int)

    # Procesar cada pixel central de las casillas
    for idx, (x, y) in enumerate(cell_centers):
        cell_rgb = image[x, y]

        color_index = unique_colors.index(cell_rgb.tolist())
        row = idx // 11
        col = idx % 11
        color_matrix[row, col] = color_index

    print("Matriz de colores:")
    for row in color_matrix:
        colored_row = [letters[index] for index in row]
        print(" ".join(colored_row))
