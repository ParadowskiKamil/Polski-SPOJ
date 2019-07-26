import java.util.Scanner;

class Suma {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int sum = 0;
        while (in.hasNextInt()) {
            int number = in.nextInt();
            System.out.println(sum += number);
        }
    }
}
