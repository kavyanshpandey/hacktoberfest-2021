import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Binary number as a input : ");
        sc.useRadix(2);
        double b= sc.nextInt();
        System.out.println("Binary to Decimal conversion is : "+b);
//        sc.useRadix(16);
//        System.out.println("Binary to Hexadecimal conversion is : "+b);

    }
}
