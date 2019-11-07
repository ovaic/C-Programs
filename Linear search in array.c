#include <stdio.h>
#include <stdlib.h>

int searchInArray(int myArray[], int search_key);

int main()
{
    int search_key=0, x=0, size=0;
    
    int myArray[5]={1,2,3,4,5};

    
   
    
        printf("\nHello user enter any input to search\n");
        scanf("%d",&search_key);

       
            x=searchInArray(myArray, search_key);

            if(x==0)
            {
                printf("\nsearch_key value not found");
            }
            else if(x==1)
            {
                printf("\nsearch_key value found");
            }
        
    
    return 0;
}
int searchInArray(int mrray[], int sec_key)
{

    for(int i=0;i<5;i++)
    {
        if(sec_key==mrray[i])
        {
            return 1;
            break;
        }

    }
    return 0;
}
