//
// Created by Marius on 5/11/2020.
//

#include "KonsolesSpalva.h"
#include <windows.h>
void KonsolesSpalva::spalva(int kodas) {
  HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(handle, kodas);
}
