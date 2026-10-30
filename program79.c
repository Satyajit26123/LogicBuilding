//input:5
//1+2+3+4+5=15

//input:8
//1+2+3+4+5+6+7+8=36
#include<stdio.h>
#include<stdlib.h>



    int main()
    {
    int icnt=0;
    int iSum=0;

    icnt=1;
    iSum=iSum+icnt;
    icnt++;
    iSum=iSum+icnt;
    icnt++;
    iSum=iSum+icnt;
    icnt++;
    iSum=iSum+icnt;
    icnt++;
    printf("%d\n",iSum);
    return EXIT_SUCCESS;
}