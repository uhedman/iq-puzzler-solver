#ifndef LIB_C
#define LIB_C
#include <iostream>
#define ANSI_COLOR_RGB(r, g, b) "\033[38;2;" #r ";" #g ";" #b "m"
#define RESET "\033[0m"
using namespace std;

void color(char c) {
  switch (c) {
  case 'v':
    cout << ANSI_COLOR_RGB(1,155,104) << "█";
    break;
  case 'a':
    cout << ANSI_COLOR_RGB(254,221,1) << "█";
    break;
  case 'z':
    cout << ANSI_COLOR_RGB(0,175,238) << "█";
    break;
  case 'f':
    cout << ANSI_COLOR_RGB(240,112,171) << "█";
    break;
  case 'n':
    cout << ANSI_COLOR_RGB(247,147,29) << "█";
    break;
  case 'p':
    cout << ANSI_COLOR_RGB(144, 41, 128) << "█";
    break;
  case 'c':
    cout << ANSI_COLOR_RGB(141,214,246) << "█";
    break;
  case 'r':
    cout << ANSI_COLOR_RGB(238,29,35) << "█";
    break;
  case 'm':
    cout << ANSI_COLOR_RGB(138,199,62) << "█";
    break;
  case 'b':
    cout << ANSI_COLOR_RGB(182,41,46) << "█";
    break;
  case 'j':
    cout << ANSI_COLOR_RGB(0,103,179) << "█";
    break;
  case 'q':
    cout << ANSI_COLOR_RGB(123,203,191) << "█";
    break;
  case 'g':
    cout << ANSI_COLOR_RGB(89,79,84) << "█";
    break;
  default:
    break;
  }
}
#endif