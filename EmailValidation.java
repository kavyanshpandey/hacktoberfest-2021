import java.util.Scanner;

public class EmailValidation {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String Email;
        System.out.println("Enter your mail if do you want to the check Email Validation : ");
        Email=sc.nextLine();
        if (Email.matches("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$")==true)
        {
            System.out.println("Entered Email is Valid !!");
        }
        else
            System.out.println("Invalid Email !!");
    }
}
