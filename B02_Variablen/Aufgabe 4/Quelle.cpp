#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Zahl = 0;
    printf("Zahl eingeben:");
    scanf_s("%i", Zahl);

    double Drittel = (double)Zahl / 3;

    printf("Inhalt von Zahl = %i\n", Zahl);
    printf("Adresse von Zahl = %p\n", &Zahl);
    //printf("Inhalt von Drittel = %lf\n",
}