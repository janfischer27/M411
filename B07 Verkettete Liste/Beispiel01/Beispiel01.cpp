/*#include <stdio.h>
#include <stdlib.h>

  typedef struct  {
  int Nr;
  Element* pNext;
  struElement;
  } 

 int main()
{
 struElement * pNew = (struElement*)malloc(sizeof(struElement)); //Memory a location
 if (pNew == NULL) return -1;

 pElement->Nummer = 1;
 pElement->pNext = NULL;
 struElement * pStart = pElement;

 pElement = (struElement*)malloc(sizeof(struElement));
 pElement->Nummer = 2;
 pElement->pNext = NULL;
 pStart->pNext = pElement;
 return 0;
 };*/


/*
#include <stdio.h>
#include <stdlib.h>





 typedef struct Elm
 {
   int Nr;
   struct Elm* pNext;
 } struElm;





 int main()
 {
   struElm* pNew = NULL;
   struElm* pStart = NULL;
   struElm* pLast = NULL;






   for (int iELm = 0; iELm < 178; iELm++)
   {
     //Erstes Element erstellen und initialisieren
     pNew = (struElm*)malloc(sizeof(struElm));
     if (pNew == NULL) return -1;
     pNew->Nr = iELm + 1;
     pNew->pNext = NULL;



     //neues Element an Liste anfügen
     if (pStart == NULL) pStart = pNew;
     if (pLast != NULL)pLast->pNext = pNew;
     pLast = pNew;
   }





   //Ausgabe
   for (struElm* pElm = pStart; pElm != NULL; pElm = pElm->pNext)
     printf("Nr = %i \n", pElm->Nr);





   system("pause");
   return 0;
 }*/

#include <stdio.h>
#include <stdlib.h>





   typedef struct Elm
 {
   int Nr;
   struct Elm* pNext;
 } struElm;





 int main()
 {
   struElm* pNew = NULL;
   struElm* pStart = NULL;
   struElm* pLast = NULL;






   for (int iELm = 0; iELm < 187; iELm++)
   {
     //Erstes Element erstellen und initialisieren
     pNew = (struElm*)malloc(sizeof(struElm));
     if (pNew == NULL) return -1;
     pNew->Nr = iELm + 1;
     pNew->pNext = NULL;



     //neues Element an Liste anfügen
     if (pStart == NULL) pStart = pNew;
     if (pLast != NULL)pLast->pNext = pNew;
     pLast = pNew;
   }





   //Ausgabe
   for (struElm* pElm = pStart; pElm != NULL; pElm = pElm->pNext)
     printf("Nr = %i \n", pElm->Nr);





   system("pause");
   return 0;
 }