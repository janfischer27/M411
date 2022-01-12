#include <stdio.h>
#include <stdlib.h>

int main()
{    
  float Anzahl = 24;    
  float* pAnzahl = &Anzahl; //Adresse zeigt auf float
  
  printf("Inhalt von Anzahl  = %f\n", Anzahl);    
  printf("Adresse von Anzahl = %p\n", pAnzahl);   
  printf("Inhalt, auf den der Pointer zeigt: %f\n", *pAnzahl);
  
  system("pause");    
  return 0; 
}