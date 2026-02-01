import java.util.Scanner;

public class Vendor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int price=0;

        while(price<23){
            System.out.print("Enter the number of coins:");
            int count = sc.nextInt();
            price=price+count;
        }
        System.out.println(price+" coins fetched successfully");
    }
}
