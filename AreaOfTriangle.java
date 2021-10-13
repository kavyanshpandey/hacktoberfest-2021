import  java.util.Scanner;
public class AreaOfTriangle
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        float s,a,b,c;
        float height,Base;
        double area=0;
        System.out.println("IF you know All three sides of triangle then enter 1. \n if you have the right angle triangle then Press 2 : ");
        n=sc.nextInt();
        if(n==1)
        {
            System.out.println("Enter the value/size of All sides(a,b,c) respectively : ");
            a=sc.nextFloat();
            b=sc.nextFloat();
            c=sc.nextFloat();
            s=(a+b+c)/2;
            area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
            System.out.println("Your Triangle Area is : "+area);
        }
        else if (n==2)
        {
            System.out.println("Enter the the Value of Height and Base respectively : ");
            Base=sc.nextFloat();
            height=sc.nextFloat();
            area=(Base*height)/2;
            System.out.println("Your Triangle Area is : "+area);
        }
    }
}
