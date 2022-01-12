#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int Zahl = 10.0;
  char Buchstabe = 'A';
  short Liste[8] = { 1, 2, 4, 8, 16, 32, 64, 128 };
  double Wert = 0.00;

  int* pZahl = NULL;
  char* pBuchstabe = &Buchstabe;
  short* pListe = *Liste;
  double* pWert = &Wert;
  pZahl = &Zahl;

}

