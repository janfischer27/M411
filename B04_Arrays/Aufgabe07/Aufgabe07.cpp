#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
  char Text[100 + 1];

  printf("Bitte gib ein Wort ein: ");
  gets_s(Text);

  char* pText = Text;
  while (*pText != '\0') pText++;
  --pText;

  printf("Reverse Text: ");
  while (Text <= pText) {
    printf("%c", *pText);
    --pText;
  }

  printf("\n");
  system("pause");
  return 0;
}