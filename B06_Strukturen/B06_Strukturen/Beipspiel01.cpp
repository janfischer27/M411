#include <stdio.h>
#include <stdlib.h>

typedef struct { //Ausserhalb von Main, damit sie auch z.B. in eine Funtkion gebraucht werden kann. Also global.
  int x; //Deklarationen
  int y;
} struPunkt;


int main()
{
  struPunkt MittelPunkt;

  MittelPunkt.x = 150;
  MittelPunkt.y = 200;

  printf("Value:       Mittelpunkt(%i|%i)\n", MittelPunkt.x, MittelPunkt.y);

  struPunkt* pPunkt = &MittelPunkt;
  printf("Reference:   Mittelpunkt(%i|%i)\n", pPunkt->x, pPunkt->y);

  //oder
  //printf("Reference:   Mittelpunkt(%i|%i)\n", (*pPunkt).x, (*pPunkt).y);

  struPunkt* pNewPunkt = (struPunkt*) malloc(sizeof(struPunkt)); // Memorie wird reserviert (memorie a location oder so)
  pNewPunkt->x = 99;
  pNewPunkt->y = 501;
  printf("Dynamisch:   Mittelpunkt(%i|%i)\n", pNewPunkt->x, pNewPunkt->y);
  free(pNewPunkt); //Speicher wieder aufräumen

  system("pause");
  return 0;
}