import java.util.Scanner;
class Arithmetic
{
    public  int Addition(int iNo1,iNo2)
    {
        int IAns=0;
        iAns=iNo1+iNo2;
        return iAns;

    }
}
class program39
{
    public static void main(String A[])
    {
        Scanner scanner=null;
        Arithmetic arithmetic=null;
        int iValue1=0,int iValue2=0,iResult=0;
        scanner=new Scanner(System.in);
        System.out.println("enter first number");
        iValue1=scanner.nextInt();
         System.out.println("enter second number");
        iValue2=scanner.nextInt();
        arithmetic=new Arithmetic();
        iResult=arithmetic.Addition(iValue1,iValue2);
        System.out.println("Addition is:"+iResult);



    }
}