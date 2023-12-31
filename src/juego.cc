#include <iostream>
#include "juego.hh"
#include "pieza.hh"
#include "lib.cc"
using namespace std;

Juego::Juego(char matriz[5][11]) {
  if (matriz == NULL) {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 11; j++) {
        tablero[i][j] = 'g';
      }
    }
  }
  else {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 11; j++) {
        tablero[i][j] = matriz[i][j];
      }
    }
  }

  Pieza **pcs = crearPiezas();
  for (int i = 0; i < 12; i++) {
    piezas[i] = pcs[i];
  }
  
}

void 
Juego::Print() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 11; j++) {
      color(tablero[i][j]);
    }
    cout << endl;
  }
}


// bool
// Sudoku::Solve() {
//   // Array de casillas vacias
//   std::array<std::pair<int, int>, 64> casillasVacias;
//   std::array<std::array<int, 10>, 64> posibles;
//   int elems = 0;

//   // Analizamos cada casilla
//   int last = 0;
//   for (int i = 0; i < 9; i++) 
//     for (int j = 0; j < 9; j++) 
//       if (matrix[i][j] == 0) {
//         casillasVacias[elems] = std::make_pair(i, j);
//         for (int k = 1; k < 10; k++)
//           if (Check(i, j, k)) {
//             posibles[elems][last] = k;
//             last = k;
//           }

//         posibles[elems][last] = 10;
//         elems++;
//         last = 0;
//       }
            
//   if (elems == 0) {
//     // No hay casillas vacías, el Sudoku está resuelto
//     return true;
//   }

//   int idx = 0, i, j, start;
//   bool warm_start = false;
//   while (idx < elems && idx >= 0) {
//     i = casillasVacias[idx].first;
//     j = casillasVacias[idx].second;

//     // warm_start significa continuar desde el valor guardado
//     if (warm_start) {
//       start = matrix[i][j];
//       matrix[i][j] = 0;
//       warm_start = false;
//     }
//     else {
//       start = 0;
//     }
//     for (int k = posibles[idx][start]; k < 10; k = posibles[idx][k]) {
//       if (Check(i, j, k)) {
//         matrix[i][j] = k;
//         idx++;
//         break;
//       }
//     }

//     // Si la casilla esta vacia, ningun elemento aprueba
//     // Se continua desde el anterior con warm_start
//     if (matrix[i][j] == 0) {
//       idx--;
//       warm_start = true;
//     }
//   }
//   return idx == elems;
// }

// bool
// Sudoku::Check(int i, int j, int n) {
//   // Comparar la columna y la fila
//   for (int k = 0; k < 9; k++) {
//     if (matrix[k][j] == n || matrix[i][k] == n) {
//       return false;
//     }
//   }

//   // Comparar el cuadrado 3x3
//   for (int k = 3*(i / 3); k < 3*(i / 3) + 3; k++) {
//     for (int l = 3*(j / 3); l < 3*(j / 3) + 3; l++) {
//       if (matrix[k][l] == n) {
//         return false;
//       }
//     }
//   }
  
//   return true;
// }

// Sudoku::Sudoku(int numbers[9][9]) {
//   // Rellenar la matriz interna 
//   for (int i = 0; i < 9; i++) {
//     for (int j = 0; j < 9; j++) {
//       matrix[i][j] = numbers[i][j];
//     }
//   }
// }

// bool
// Sudoku::Validate() {
//   // Similar a check para cada casilla pero contempla que se compare
//   // la misma casilla dos veces
//   int n;

//   for (int i = 0; i < 9; i++) {
//     for (int j = 0; j < 9; j++) {
//       n = matrix[i][j];
//       // Comparar la columna y la fila
//       for (int k = 0; k < 9; k++) {
//         if ((matrix[k][j] == n && k != i) || (matrix[i][k] == n && k != j)) {
//           return false;
//         }
//       }

//       // Comparar el cuadrado 3x3
//       for (int k = 3*(i / 3); k < 3*(i / 3) + 3; k++) {
//         for (int l = 3*(j / 3); l < 3*(j / 3) + 3; l++) {
//           if (matrix[k][l] == n && (k != i || l != j)) {
//             return false;
//           }
//         }
//       }
//     }
//   }
  
//   return true;
// }