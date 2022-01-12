#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definition einer quasi Konstante ANZAHL, welche vor dem eigentlich
// Compiliervorgang im Code durch den Wert 10 ersetzt wird
#define ANZAHL 10

int main()
{
  int Zahlen[ANZAHL];
  // Hiermit wird der Zufallszahlengenerator initialisiert.
  // Der gleiche Initialisierungswert Wert ergibt immer die gleichen Zufallszahlen
  // Damit der Wert immer ändert verwenden wir die time Funktion
  srand((unsigned)time(NULL));
  // Abfüllen des Arrays mit Zufallszahlen
  for (int i = 0; i < ANZAHL; i++) Zahlen[i] = rand() % 100;

  //Ausgabe
  printf("Zufallszahlen\n");
  for (int i = 0; i < ANZAHL; i++) printf("Zahl %2d: 5%d\n", i + 1, Zahlen[i]);
  printf("\n");

  printf("Fertig!\n");

  system("pause");
  return 0;
}