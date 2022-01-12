#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main()
{
  char Text[100 + 1];

  strcpy_s(Text, "Hallo"); //Ziel und Quelle

  printf("Der Text lautet: ");
  for (int i = 0; Text[i] != '\0'; i++) printf("%c", Text[i]); //Ausgaben jedes einzelnen Buchstabens

  system("pause");
  //return 0;
}