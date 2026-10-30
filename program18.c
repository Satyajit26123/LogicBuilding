#include<stdio.h>
#include<stdlib.h>

void CheckEven(int ino)
{
    
}

int main()
{
    int iValue=0;
    printf("Enter no : \n");
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