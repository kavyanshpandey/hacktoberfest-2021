import java.util.Scanner;

public class Email_Username_And_Domain {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String Email;
        System.out.println("Enter your mail if do you want to the check Email Validation : ");
        Email=sc.nextLine();
        if (Email.matches("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$")==true)
        {
            System.out.println("Entered Email is Valid !!");
            for (int i = 0; i < Email.length(); i++) {
                if(Email.charAt(i)=='@')
                {
                    System.out.println("User Name is : "+Email.substring(0,i));
                    System.out.println("Domain Name is : "+Email.substring(i+1,Email.length()));
                    return ;
                }
            }
        }
        else
            System.out.println("Invalid Email !!");
    }
}
