import java.util.Scanner;

public class Quardatic {
    public static void main(String[] args) {
        float a,b,c;
        double D1,D2;
        Scanner sc =new Scanner(System.in);
        a=sc.nextFloat();
        b=sc.nextFloat();
        c=sc.nextFloat();
        if ((b*b-4*a*c)>=0)
        {
            D1=(-b + Math.sqrt(b*b-4*a*c))/(2*a);
            D2=(-b - Math.sqrt(b*b-4*a*c))/(2*a);
            System.out.println("Your Root is :"+D1+" and "+D2);
            if ((b*b-4*a*c)==0)
            {
                System.out.println("You have same root Beacause Discriminant is same !! ");
            }
        }
        else
            System.out.println("You Have imaginary roots !!!");

    }
}
