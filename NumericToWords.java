import java.util.Scanner;

public class NumericToWords {
    public static void main(String[] args) {
        int rem,rev=0,n,temp;
        String str="";
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Numeric number :");
        n=sc.nextInt();
        temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            temp=temp/10;
            rev=rev*10+rem;
            str=str+rem;
        }
        System.out.println("Reverse no. is : "+rev);
        System.out.println("Reverse no. as String is : " +str);
        for (int i = str.length()-1; i >=0 ; i--) {
            char c=str.charAt(i);
            switch (c) {
                case '0':
                    System.out.print("Zero ");
                    break;
                case '1':
                    System.out.print("One ");
                    break;
                case '2':
                    System.out.print("Two ");
                    break;
                case '3':
                    System.out.print("Three ");
                    break;
                case '4':
                    System.out.print("Four ");
                    break;
                case '5':
                    System.out.print("Five ");
                    break;
                case '6':
                    System.out.print("Six ");
                    break;
                case '7':
                    System.out.print("Seven ");
                    break;
                case '8':
                    System.out.print("Eight ");
                    break;
                case '9':
                    System.out.print("Nine ");
                    break;
                default:
                    System.out.println("Input is INVALID !!!");
        }
    }
}
}



