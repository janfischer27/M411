#include "stdio.h"
#include "stdlib.h"

int main()
{
  int Zahlen[] = { 10, 20, 30, 40, 50, 60, 70};
  int Anzahl = sizeof(Zahlen) / sizeof(Zahlen[0]);

  printf("Ausgabe mit Index:\n");
  for (int Index = 0; Index < Anzahl; Index++)
    printf("Zahlen [%i]: %i\n", Index, Zahlen[Index]);
  printf("\n \n");
  printf("Ausgabe mit Pointer:\n");
  for (int* pWert = Zahlen; pWert - Zahlen < Anzahl; pWert++)
    printf("Zahlen [%i]: %i\n", pWert - Zahlen, *pWert);

  system("pause");
  return 0;
}

