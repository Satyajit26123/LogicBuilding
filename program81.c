

#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int icnt=0;
    int iSum=0;

    for(icnt=1;icnt<=iNo;icnt+=2)
    {
         iSum=iSum*icnt;
         
    }

return iSum;
}


    int main()
    {
        int iValue=0;
        int iRet=0;
    
    printf("enter the frequency:\n");
    scanf("%d",&iValue);
    iRet=Summation(iValue);
    printf("Summation is:%d\n",iRet);
    return EXIT_SUCCESS;
}