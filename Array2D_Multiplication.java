import java.util.Scanner;

public class Array2D_Multiplication {
    public static void main(String[] args) {
        int a,b,m,n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no. of rows and columns of 1st Array respectively :");
        a=sc.nextByte();
        b=sc.nextByte();
        System.out.println("Enter the no. of rows and columns of 2nd Array respectively :");
        m= sc.nextByte();
        n=sc.nextByte();
        int A[][]=new int[a][b];
        int B[][]=new int[m][n];
        int C[][]=new int[a][n];
        if(b==m)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    System.out.println("A["+(i+1)+"]"+"["+(j+1)+"]");
                    A[i][j]=sc.nextInt();
                }
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    System.out.println("B["+(i+1)+"]"+"["+(j+1)+"]");
                    B[i][j]=sc.nextInt();
                }
            }
            System.out.println("First Matrix is : ");
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    System.out.print(A[i][j]+" ");
                }
                System.out.println();
            }
            System.out.println("Second Matrix is : ");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    System.out.print(B[i][j]+" ");
                }
                System.out.println();
            }
            // For Multiplication Logic
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    for (int k = 0; k <m ; k++)
                    {
                        C[i][j]=C[i][j]+A[i][k]*B[k][j];
                    }
                }
            }
            System.out.println("Multiplied Matrix is : ");
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    System.out.print(C[i][j]+" ");
                }
                System.out.println();
            }
        }
        else
        {
            System.out.println("ERROR!!! : Multiply of two matrix is impossible according to your Input. ");
        }
    }
}
