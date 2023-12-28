#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "juego.hh"

int main(int argc, char *argv[]) {
  string file;

  if (argc == 1) {
    cout << "Ingrese la ruta del archivo con el problema a resolver o dejar en blanco para usar un juego vacio\n";
    getline(cin, file);
  } else if (argc == 2) {
    // Si se proporciona un argumento, usar ese argumento como la ruta del archivo
    file = argv[1];
  } else {
    // Manejar caso incorrecto de argumentos
    fprintf(stderr, "Uso incorrecto del programa.\n");
    return 1;
  }

  ifstream inputFile(file);

  Juego *juego;
  if (!inputFile.is_open()) {
    cout << "Iniciando tablero vacio.\n";
    juego = new Juego(NULL);
  }
  else {
    char color_matrix[5][11];
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 11; j++) {
        if (!(inputFile >> color_matrix[i][j])) {
          cerr << "Error al leer desde el archivo.\n";
          return 1;
        }
      }
    }
    juego = new Juego(color_matrix);
  }
  juego->Print();
}