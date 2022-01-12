#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Variablen deklarieren und initialisieren
  int Zahl = 10.0;
  char Zeichen = 'A';
  double Wert = 0.00;

  // Pointervariablen deklarieren und initialisieren
  int* pZahl = NULL; //NULL muss gross geschreiben sein
  char* pZeichen = &Zeichen;
  double* pWert = &Wert;
  pZahl = &Zahl;

  // Ausgaben
  printf("%i, %p\n", Zahl, pZahl);
  printf("%c, %c\n", &Zeichen, *pZeichen);
  printf("%lf, %lf\n", *pWert + 1, Wert);

  // Veränderungen
  Zahl = *pZahl++;
  Zeichen = 'A';
  *pWert = --Wert + 8;

  // Ausgaben 2
  printf("%i, %i\n", Zahl, *pZahl);
  printf("%c, %c\n", Zeichen, *pZeichen);

  system("pause");
  return 0;
}