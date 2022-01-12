#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Laenge = 0;
  int Breite = 0;
  int Flaeche = 0;
  int* pLaenge = &Laenge;
  int* pBreite = &Breite;
  int* pFlaeche = &Flaeche;

  //Eingabe von Länge und Breite
  printf("Laenge eingeben: ");
  scanf_s("%i", pLaenge);
  printf("Breite eingeben: ");
  scanf_s("%i", pBreite);

  //Verarbeitung
  *pFlaeche = *pBreite * *pLaenge; //mit Stern vorne Date rausholen

  //Ausgabe
  printf("\n");
  printf("AUSGABE:\n");
  printf("\n");
  printf("Laenge = %i\n", *pLaenge);
  printf("Breite = %i\n", *pBreite);
  printf("Flaeche = %i\n", *pFlaeche);

  system("pause");
  return 0;
}