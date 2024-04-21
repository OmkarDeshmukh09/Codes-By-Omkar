import java.util.Scanner;
class Exception1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Fisrt Number: ");
        int No1=sobj.nextInt();

        System.out.println("Entet the Second Number: ");
        int No2=sobj.nextInt();

        float Ans = No1/No2;

        System.out.println("Division is : "+Ans);
    }
}