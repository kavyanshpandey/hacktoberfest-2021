import java.util.Scanner;

public class IsBinaryNumber {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String binary;
        System.out.println("Enter a Binary No. : ");
        binary=sc.nextLine();
        if(binary.length()>0)
        {
            if (binary.matches("[01]*"))
                {
                    System.out.println("It is a Binary Number !!!");
                    return;
                }
            else
                {
                System.out.println("It is just String,Not a Binary Number.");
                }
        }
        else
        {
            System.out.println("Please Enter Binary Number then hit Enter . TRY AGAIN !!!!");
        }

    }
}
