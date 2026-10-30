#include "header.h"
int main()
{
    int iValue1=0,iValue2=0,iResult=0;

    printf("Enter The First Number: \n");
    if(scanf("%d",&iValue1) !=1)      
    {
        fprintf(stderr,"unable to proceed as input is invalid /n");
        return EXIT_FAILURE;
    }             //& is Address of the Number 
    
    printf("Enter Ther Second Number: \n");
   if(scanf("%d",&iValue2) !=1)      
    {
        fprintf(stderr,"unable to proceed as input is invalid /n");
        return EXIT_FAILURE;
    }             //& is Address of the Number 
    

    iResult=Addition(iValue1,iValue2);
    printf("Addition is: %d",iResult);
    
    return EXIT_SUCCESS;
 }
 