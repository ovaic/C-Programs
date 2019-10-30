#include<stdio.h>

///Program to draw a diamond symbol
int main()
{

    int i, j, k, space=2;
 ///Loop for rows
    for(i=1; i<=5; i++)
    {

       if(i%2==1)
       {
           ///Loop for adding spaces
           for(j=1; j<=space; j++)
           {
               printf(" ");
           }
           /// Loop for printing stars
           for(k=1; k<=i; k++)
           {
               printf("*");
           }
           printf("\n");
           space--;
       }
    }
    space = 1;
    ///For Loop for rows
    for(i=3; i>=1; i--)
    {
       if(i%2==1)
       {
           ///Loop for adding spaces
           for(j=1; j<=space; j++)
           {
               printf(" ");
           }
           /// Loop for printing stars
           for(k=1; k<=i; k++)
           {
               printf("*");
           }
           printf("\n");
           space++;
       }
    }
}
