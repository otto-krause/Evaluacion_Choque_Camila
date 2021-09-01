#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,sum=0,i=0,num=0,rest=0,suma=0,opcion=0,c;
    printf("Ingrese dos numeros:\n");
    scanf("%d",&A);
    scanf("%d",&B);
    if (A<B)
    {
         printf("\nQuiere que se realice una multiplicacion? (Eliga un numero)\n\n");
         printf("1: Si\n2: No\n\n\n");
         scanf("%d",&opcion);
         if(opcion=1)
         {
              for(c=1;c<=B;c++)
              {
                   suma=A+suma;
               }
               printf("La multiplicacion de %d y %d es: %d",A,B,suma);
         }
         else
         {
              if(opcion=2)
              {
               return 1;
              }

         }
    }
    if (A>B || A==B)
    {
          printf("\nQuiere que se realice una multiplicacion o una division\n\n");
          printf("1: Multiplicacion\n2: Division\n3: No quiero que se realice ninguna operacion\n\n\n");
          scanf("%d",&opcion);
          if(opcion==1)
          {
               for(c=1;c<=B;c++)
              {
                   suma=A+suma;
               }
               printf("La multiplicacion de %d y %d es: %d",A,B,suma);
         }
         else
         {
              if(opcion==2)
              {
               while (num+B<=A)
               {
                    num=B+num;
                    i++;
                    rest=A-num;
               }
               printf("\nEl resultado entre %d y %d es: %d\n",A,B,i);
               printf("El resto de esta division es: %d",rest);
              }
              else
              {
                   if(opcion==3)
                   {
                        return 2;
                   }
              }

         }
          }
    return 0;
}
