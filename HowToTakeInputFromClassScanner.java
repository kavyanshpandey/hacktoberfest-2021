import java.util.Scanner;
import java.lang.String; //for get Type of object
public class HowToTakeInputFromClassScanner {
    public static void main(String[] args) {
        int a,b,sum=0;
        boolean decision,interrogate;
        byte m=0xA,n=0b1010;
        int O=0xAB185; // byte having small size so with byte datatype its' goes to overflow and give error
        Scanner sc =new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        interrogate=sc.hasNextInt();
        decision=a>b;
        sum=a+b;
        System.out.println("Sum : "+sum);
        System.out.println("'a>b' Relation Status : "+decision);
        System.out.println("interrogate to integer: "+interrogate);
        System.out.println(m+"        "+n+"          ");
        System.out.println("Long Hexadecimal value : "+O);


    }
}
