#include <stdio.h>
#include <stdlib.h> 

int main() 
{    
  // 01.
  int Zahl = 345;
  int Wert;

  // 02.
  int* pZeig1;
  int* pZeig2;

  // 03. 
  pZeig1 = &Zahl;

  // 04. 
  pZeig2 = &Wert;

  // 05. Inhalt bzw. Wert wird verändert 
  *pZeig2 = 45;

  // 06. 
  pZeig2 = pZeig1;

  // 07. 
  *pZeig2 = 100;

  // 08. 
  printf("Inhalt von Zahl = %i\n", Zahl);
  printf("Adresse von Zahl = %p\n", &Zahl);
  printf("\n");

  // 09. 
  printf("Inhalt von pZeig1 = %p\n", pZeig1);
  printf("Adresse wohin von pZeig1 zeigt = %i\n", *pZeig1);
  printf("\n");

  // 10.
  printf("Inhalt von Wert = %i\n", Wert);
  printf("Adresse wohin von Wert = %p\n", &Wert);
  printf("\n");

  // 11. 
  printf("Inhalt von pZeig2 = %p\n", pZeig2);
  printf("Adresse wohin von pZeig2 zeigt = %i\n", *pZeig2);
  printf("\n");

  system("pause");    
  return 0; 
}