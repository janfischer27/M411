#include "stdio.h"
#include "stdlib.h"

int main()
{
  char Text[100 + 1];

  // Wort einholen
  printf("Bitte gib ein Wort ein: ");
  gets_s(Text);

  // Berechnen
  char* pText = Text;
  while (*pText != '\0') pText++;

  // Ausgabe
  printf("Die L�nge deines Wortes betr�gt %i Zeichen.", pText - Text);

  printf("\n");
  system("pause");
  return 0;
}