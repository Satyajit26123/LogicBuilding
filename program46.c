#include<stdio.h>
#include<stdlib.h>
///  typecasting

float Average(int iNo1,int iNo2,int iNo3)
{
   float fAns=0.0f;
   fAns=(iNo1+iNo2+iNo3)/3;
   return fAns;



}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    float fResult=0.0f;

    printf("enter first number :\n");
    scanf("%d",&iValue1);
    printf("enter secondnumber :\n");
    scanf("%d",&iValue2);
    printf("enter third number :\n");
    scanf("%d",&iValue3);

   fResult= Average(iValue1,iValue2,iValue3);
   printf("Average is: %f\n,fResult");

    
}

    return EXIT_SUCCESS;
}
