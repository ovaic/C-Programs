///GRADING & GPA system through FUNCTION
///by giving one input parameter & getting two output parameter

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void grade_gpa (int points, char *gradep, float *gpap);

int main ()
{
    int points;
    float gpap;
    char gradep;

    printf("Input POINTS= \n");
    scanf("%d",&points);

    grade_gpa(points, &gradep, &gpap);

    printf("\nRequired GRADE is= %c ",gradep);
    printf("\nRequired GPA is= %d ",gpap);

    return 0;
}
void grade_gpa (int POINTS, char *GRADEP, float *GPA)
{
    if(POINTS<=100 && POINTS>=90)
    {
        *GRADEP='A';
        *GPA=4.0;
    }
    else if(POINTS<=89 && POINTS>=80)
    {
        *GRADEP='B';
        *GPA=3.5;
    }
    else if(POINTS<=79 && POINTS>=70)
    {
        *GRADEP='C';
        *GPA=3.0;
    }
    else if(POINTS<=69 && POINTS>=60)
    {
        *GRADEP='D';
        *GPA=2.5;
    }

    else if(POINTS<=59 && POINTS>=50)
    {
        *GRADEP='E';
        *GPA=2.0;
    }
    else if(POINTS<=49)
    {
        *GRADEP='F';
        *GPA=0;
    }
}
















