#ifndef ARCHIVO_DE_ENCABEZADO_H
#define ARCHIVO_DE_ENCABEZADO_H

// Contenido del archivo de encabezado

class Pieza {
public:
  // Constructor
  Pieza(int i, int j, char c, int shape[4][4]);

  // Destructor
  ~Pieza();

private:
  // Width
  int width;
  // Height
  int height;
  // Name
  char name;
  // Shape
  int shape[4][4];
};

Pieza **crearPiezas();
#endif // ARCHIVO_DE_ENCABEZADO_H