#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} struPunkt;


int main()
{
  int Fehler = 0;
  int Anzahl = 0;

  printf("Anzahl Elemente eingeben: "); scanf_s("%i", &Anzahl);

  for (int Index = 0; !Fehler && Index < Anzahl; Index++) {
    struPunkt* pNewPunkt = (struPunkt*)malloc(sizeof(struPunkt));
    Fehler = pNewPunkt == NULL;
    printf("%i\r", Index);
  }

  printf("%i Elemente konnten %salloziert werden!\n", Anzahl, Fehler ? "nicht " : "");

  system("pause");
  return 0;
}