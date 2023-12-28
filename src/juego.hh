#include "pieza.hh"

class Juego {
public:
  // Constructor
  Juego(char matriz[5][11]);

  // Destructor
  ~Juego();

  // 
  bool Check(Pieza p, int fila, int col);

  void Print();

private:
  // Tablero
  char tablero[5][11];

  Pieza *piezas[12];
};
