import java.util.Scanner;

import java.io.IOException;

public class Signal {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int total = 0;

        System.out.println("Enter the time interval to take the count:");
        int time = sc.nextInt();

        try {
            for (int i = 1; i <= time; i++) {
                System.out.println("Enter the signal 1.Green,2.Yellow,3.Red");
                int signal1 = sc.nextInt();

                switch (signal1) {

                    case 1:
                        total = total + 5;
                        break;

                    case 2:
                        total = total + 2;
                        break;

                    case 3:
                        break;

                    default:
                        System.out.println("Invalid signal");
                        break;
                }
            }
            System.out.println("The total vehicles passed during the count is " + total);
        }
        catch (Exception e) {
            System.out.println("Please enter a valid signal");
        }
    }

}
