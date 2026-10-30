

#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Addition
// input        : Integer,Integer
// Output       : Integer
// Description  : Performs Addition
// Date         : 04/10/2026
// Author       : Sanskar Satappa Patil
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Addition(
                int ino1,        ///first input
                int ino2         ///second input
            )
{
    int iAns=0;

    iAns=ino1+ino2;              ///Business Logic 
    return iAns;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Entry Point Of the Application
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0,iValue2=0,iResult=0;

    printf("Enter The First Number: \n");
    scanf("%d",&iValue1);                   //& is Address of the Number 
    
    printf("Enter Ther Second Number: \n");
    scanf ("%d",&iValue2);

    iResult=Addition(iValue1,iValue2);
    printf("Addition is: %d",iResult);
    
    return EXIT_SUCCESS;
 }
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Step5: Test The Programm
    Tested Test Cases
    
-------------------------------------------------------------------
    Input 1     Input 2      Output
------------------------------------------------------------------- 
     11           11            21
     11           0             11
     0            11            11
     20           -9            11
     -9           20            11
     -20         -11           -31
-------------------------------------------------------------------------------------
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////