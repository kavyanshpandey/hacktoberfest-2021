import java.util.Scanner;

public class Xor_operation {
    public static void main(String[] args) {
    swapping sw =new swapping();
    int x,y;
        Scanner sc = new Scanner(System.in);
        x=sc.nextInt();
        y=sc.nextInt();
    sw.swapping(x,y);
    }
}

 class swapping{
    void swapping(int a,int b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
        System.out.println("a : "+ a+"\nb : "+b);
    }
}
