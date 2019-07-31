import java.util.Scanner;

class Test3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int counter = 0;
        while (counter < 3) {
            int number = in.nextInt();
            System.out.println(number);
            while (number != 42) {
                number = in.nextInt();
                System.out.println(number);
                if (number == 42)
                    counter++;
            }
        }
    }
}
