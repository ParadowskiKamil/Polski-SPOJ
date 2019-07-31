import java.util.Scanner;

class LiczbyPierwsze {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            int number = in.nextInt();
            if (isPrime(number) && number != 1)
                System.out.println("TAK");
            else
                System.out.println("NIE");
            }
        }

    public static boolean isPrime(int number) {
        for (int i = 2; i < number; i++) {
            if (number % i == 0)
                return false;
        }
        return true;
    }
}
