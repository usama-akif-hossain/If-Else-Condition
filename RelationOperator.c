/*
>
>=
<
<=
==
!=

*/


#include <stdio.h>
int main () {
     int num;
     printf("Enter an Integer : ");
     scanf("%d",&num);

     if (num%2==0)
     {
        printf("Even\n");
     }
     else
     {
        printf("odd\n");
     }
     
     return 0;
}