#include "pieza.hh"

Pieza::Pieza(int i, int j, char c, int s[4][4]) {
  width = i;
  height = j;
  name = c;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      shape[i][j] = s[i][j];
    }
  }
}

Pieza **crearPiezas() {
  int i = 3;
  int j = 2;
  char c = 'v';
  int shape1[4][4] = {
    {1, 1, 1, 0},
    {0, 1, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  };
  Pieza *verde = new Pieza(i, j, c, shape1);

  i = 4;
  j = 2;
  c = 'a';
  int shape2[3][4] = {
    {1, 1, 1, 1},
    {0, 0, 1, 0},
    {0, 0, 0, 0}
  };
  Pieza *amarilla = new Pieza(i, j, c, shape2);

  i = 3;
  j = 3;
  c = 'z';
  int shape3[3][4] = {
    {1, 1, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 1, 0}
  };
  Pieza *zafiro = new Pieza(i, j, c, shape3);

  i = 4;
  j = 2;
  c = 'f';
  int shape4[3][4] = {
    {1, 1, 1, 0},
    {0, 0, 1, 1},
    {0, 0, 0, 0}
  };
  Pieza *fucsia = new Pieza(i, j, c, shape4);

  i = 3;
  j = 3;
  c = 'n';
  int shape5[3][4] = {
    {0, 1, 0, 0},
    {1, 1, 0, 0},
    {0, 1, 1, 0}
  };
  Pieza *naranja = new Pieza(i, j, c, shape5);

  i = 3;
  j = 3;
  c = 'p';
  int shape6[3][4] = {
    {1, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 1, 0}
  };
  Pieza *purpura = new Pieza(i, j, c, shape6);

  i = 2;
  j = 2;
  c = 'c';
  int shape7[3][4] = {
    {1, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 0, 0}
  };
  Pieza *celeste = new Pieza(i, j, c, shape7);

  i = 4;
  j = 2;
  c = 'c';
  int shape8[3][4] = {
    {1, 1, 1, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 0}
  };
  Pieza *roja = new Pieza(i, j, c, shape8);

  i = 3;
  j = 2;
  c = 'm';
  int shape9[3][4] = {
    {1, 1, 1, 0},
    {1, 0, 1, 0},
    {0, 0, 0, 0}
  };
  Pieza *musgo = new Pieza(i, j, c, shape9);

  i = 3;
  j = 2;
  c = 'b';
  int shape10[3][4] = {
    {1, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
  };
  Pieza *bordo = new Pieza(i, j, c, shape10);

  i = 3;
  j = 2;
  c = 'j';
  int shape11[4][4] = {
    {1, 1, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  };
  Pieza *jazul = new Pieza(i, j, c, shape11);

  i = 3;
  j = 2;
  c = 'f';
  int shape12[4][4] = {
    {1, 1, 1, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  };
  Pieza *faqua = new Pieza(i, j, c, shape12);
  
  Pieza **pcs = new Pieza*[12];
  pcs[0] = verde;
  pcs[1] = amarilla;
  pcs[2] = zafiro;
  pcs[3] = fucsia;
  pcs[4] = naranja;
  pcs[5] = purpura;
  pcs[6] = celeste;
  pcs[7] = roja;
  pcs[8] = musgo;
  pcs[9] = bordo;
  pcs[10] = jazul;
  pcs[11] = faqua;

  return pcs;
}