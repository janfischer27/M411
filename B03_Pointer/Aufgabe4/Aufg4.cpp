#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int main()
{
  double Quadrat = 81.0; //Basis
  double *pQuadrat = &Quadrat;  //Pointer zeigt drauf

  printf("Quadrat = %lf\n", *pQuadrat);    
  printf("Zahl    = %lf\n", sqrt(*pQuadrat));  

  system("pause");    
  return 0; 
}