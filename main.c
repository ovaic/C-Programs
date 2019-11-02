///Finding QUADRATIC ROOTS through FUNCTION
///by giving 3 input parameter & getting 2 output parameters
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadratic_roots(float a, float b, float c, double *rt1, double *rt2);

int main()
{
    float a=0,b=0,c=0;
    double rt1,rt2;

    printf("Enter the three roots: ");
    scanf("%f %f %f", &a, &b ,&c);

    quadratic_roots(a,b,c,&rt1,&rt2);

    printf("\nRoot 1 is: %.2lf", rt1);
    printf("\nRoot 2 is: %.2lf", rt2);

    return 0;
}
void quadratic_roots(float a1,float b1,float c1,double *r1,double *r2)
{
    float disc=0,ans=0;

    ans = (pow(b1,2))-(4*a1*c1);
    disc = sqrt(ans);

    *r1 = (-b1+disc)/(2*a1);

    *r2 = (-b1-disc)/(2*a1);
}
