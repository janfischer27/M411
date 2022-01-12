#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <ctype.h>

int main()
{
  char Text[100 + 1];

  printf("Dein Wort: ");
  gets_s(Text);
  printf("Dein Wort in Grossbuchstaben: ");
  for (char* pText = Text; *pText != '\0'; pText++) {
  printf("%c", toupper(*pText));
  }

  printf("\n");
  system("pause");
  return 0;
}