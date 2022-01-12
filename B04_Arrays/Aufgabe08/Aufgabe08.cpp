#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() //nicht fertig
{
  char Text[100 + 1];

  printf("Bitte gib ein Wort ein: ");
  gets_s(Text);

  // Keine Leerzeichen ausgeben
  while (char* pText = Text; *pText != '\0'; pText++;) {
    if (*pText != ' ');
    printf("%c" * pText);
  }

  printf("\n");
  system("pause");
  return 0;
}