
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Sentinal -1

///Finds any 3 digit Input numbers are MAGIC NUMBER or not
///Then tells TOTAL number of found Magic Numbers
///Magic Number = xyz (3 digit number)= (x^3)+(y^3)+(z^3)

int isMagicNumber (int);

int main()
{
    int n,result,total=0;

    for ( ; n != Sentinal; scanf("%d",&n) )
    {
        printf("Enter any three digit number: \n");
        scanf("%d",&n);

        result=isMagicNumber(n);
        if(result==1)
        {
            printf("\nresult is: %d",result);
            printf("\nMagic Number");
            total=total+1;
        }
        else
        {
            printf("\nresult is: %d",result);
            printf("\nNot Magic Number");
        }
        printf("\n\nTo CONTINUE type any number\nAnd\nTo EXIT type (-1)\n");
    }
        if (total==1)
        {
            printf("\nTotal magic numbers is: %d",total);
        }
        else
        {
            printf("\nTotal magic numbers are: %d",total);
        }
        return 0;
}
int isMagicNumber (int m)
{
    int x,y,p,q,r,s,t,e,o;
    s=m;

    x=m%100;                    ///e.g. 153%100==53==x
    y=m/100;                    ///e.g. 153/100==1==y
    p=x%10;                     ///e.g. 53%10==3==p
    q=x/10;                     ///e.g. 53/10==5==q

    r=y*y*y;
    t=q*q*q;
    e=p*p*p;

    o=r+t+e;

    if (o==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

