#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,i,A=0,B=1,C=1;
printf("Ingrese cualquier  numero: ");
scanf("%d",&num);
switch(num)
{
case 0:
          puts("f(0)=0\n");
          return 1;
     break;
case 1:
          puts("f(1)=1\n");
          return 2;
     break;
}
   printf("f(0): 0\n");
   printf("f(1): 1\n");
for (i=0;i<=num-2;i++)
{
   C= A+B;
   A=B;
   B=C;
   printf("f(%d): %d\n",i+2,C);
}
 return 0;
}
