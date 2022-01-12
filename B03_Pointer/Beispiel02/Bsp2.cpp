#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Zahl = 20;
  int* pZahl = &Zahl;

  
  printf("Adresse auf die pZahl zeigt = %p\n", pZahl);
  printf("Inhalt der Adresse auf die pZahl zeigt = %i\n", *pZahl);

  pZahl++;

  printf("\n");
  printf("Adresse auf die pZahl zeigt = %p\n", pZahl);
  printf("Inhalt der Adresse auf die pZahl zeigt = %i\n", *pZahl);
  printf("\n");

  system("pause");
  return 0;
}