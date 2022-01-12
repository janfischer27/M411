#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main()
{
  char Text[100 + 1]; //Gleiches Beispiel (wie 1) mit Pointer

  strcpy_s(Text, "Hallo"); //Ziel und Quelle

  printf("Der Text lautet: ");
  for (char*pText = Text; *pText != '\0'; pText++) printf("%c", *pText);

  printf("\n");
  system("pause");
  return 0;
}