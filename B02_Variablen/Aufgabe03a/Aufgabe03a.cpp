#include <stdio.h>
#include <stdlib.h>

int Wert = 0;

int main()
{
  double Celsius = 0.0;
  double Fahreinheit = 0.0;

  printf("Celsius: ");
  scanf_s("%lf", &Celsius);

  Fahreinheit = ((Celsius * 9) / 5) + 32;

  printf("Berechnungsergebis:\n");
  printf("Celsius= %lf\n", Celsius);
  printf("Fahreinheit = %lf\n", Fahreinheit);
  system("pause");
  return 0;
}