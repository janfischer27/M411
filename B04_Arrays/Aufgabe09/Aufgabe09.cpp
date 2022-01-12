#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() //führende Leerzeichen entfernen
{
  char Text[100 + 1];

  printf("Bitte gib ein Wort ein: ");
  gets_s(Text);
  printf("Vorher: <%s>\n", Text);

  // pSrc auf das erste nicht Leerzeichen setzen
  char* pSrc = Text;
  while (*pSrc == ' ' || *pSrc == '\t') pSrc++;

  //Inhalt von Source nach Destination umkopieren
  char *pDst = Text;
  while (*pSrc != '\0') {
    *pDst = *pSrc;
    pSrc++;
    pDst++;
  }
  *pDst = '\0';

  printf("Nachher: <%s>\n", Text);

  //printf("\n");
  system("pause");
  return 0;
}