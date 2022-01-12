#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ANZAHL 200

int main()
{
  int Zahlen[ANZAHL];
  srand((unsigned)time(NULL));
  for (int i = 0; i < ANZAHL; i++) Zahlen[i] = rand() % 100;

  //Berechnung Anzal gerade Zahlen
  int AnzGerade = 0;
  for (int i = 0; i < ANZAHL; i++)
    if (Zahlen[i] % 2 == 0) AnzGerade++;
  // double AnzGeradeProz = AnzGerade * 100.0 / ANZAHL;
  double AnzGeradeProz = (double) AnzGerade / ANZAHL * 100.0;

  //Ausgabe
  printf("Statistik von %d Zufallszahlen: \n", ANZAHL);
  printf("es hatte %3d gerade Zahlen -> %.1lf\n", AnzGerade, AnzGeradeProz);
  printf("es hatte %3d ungerade Zahlen -> %.1lf\n", ANZAHL - AnzGerade, 100.0 - AnzGeradeProz);

  system("pause");
  return 0;
}