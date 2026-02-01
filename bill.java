import java.util.Scanner;

public class bill{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        double amt;

        System.out.print("Enter the total number of units used:");
        int n = sc.nextInt();

        if(n<100){
            amt=n*1;
        }
        else if (n>=100&&n<300) {

            amt=n*1.5;
        }
        else{
            amt=n*0.9;
        }

        if(amt>500){
            amt=amt+(amt*5/100);
        }

        System.out.println("The total amount of units used is "+amt);

    }
}
