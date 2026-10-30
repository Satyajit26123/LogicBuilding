

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt=0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
         printf("%d\t",icnt);
         icnt++;
    }
   printf("")
}


    int main()
    {

    
    printf("enter the frequency:\n");
    scanf("%d",&iValue);
    return EXIT_SUCCESS;
}