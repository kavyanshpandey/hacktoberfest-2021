import java.util.Scanner;
class String_Display
{
    void display(String s[])
    {
        for (int i = 0; i < s.length; i++)
        {
            System.out.print(s[i]);
            if(i<(s.length-1))
            {
                System.out.print(", ");
            }
            if (i==(s.length-1))
            {
                System.out.println(" ;");
            }
        }
    }
}
public class SortToTheWords {
    public static void main(String[] args) {
        int n;
        String_Display sd=new String_Display();
        Scanner sc =new Scanner(System.in);
        System.out.println("How many times do you want give String as input, Enter the number :");
        n=sc.nextInt();
        String str[] =new String[n];
        for (int i = 0; i < n; i++) {
            str[i]=sc.nextLine();
        }
        System.out.println("Entered String is : ");
        sd.display(str);
        java.util.Arrays.sort(str);
        System.out.println();
        System.out.println("Now String is Sorted : ");
        sd.display(str);
        }
        }

