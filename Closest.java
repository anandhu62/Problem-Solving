import java.util.Scanner;

public class Closest{
    public static void main(String[] args){
        int n,m;
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the first number: ");
        n=sc.nextInt();

        System.out.print("Enter the second number: ");
        m=sc.nextInt();

        int q=n/m;

        int a=q*m;
        int b=(q+1)*m;

        int d1=Math.abs(a-n);
        int d2=Math.abs(b-n);

        if (d1>d2){
            System.out.println("The closest number is "+a);
        } else if (d2>d1) {
            System.out.println("The closest number is "+b);

        }
        else{
            if(Math.abs(a)>Math.abs(b)){
                System.out.println("The closest number is "+a);
            }
            else{
                System.out.println("The closest number is "+b);
            }
        }
    }
}
