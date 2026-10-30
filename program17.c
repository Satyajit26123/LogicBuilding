#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue=0;
    printf("Enter no ");
    scanf("%d,&iValue");
    if((iValue % 2) == 0 )
    {
        printf("number is even \n");
    }
else
{
    printf("number is odd \n");
}


    return EXIT_SUCCESS;

}