import java.util.Scanner;

class Tablice {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            int[] numbers = new int[n];
            for (int j = 0; j < n; j++)
                numbers[j] = in.nextInt();
            for (int j = n - 1; j >= 0; j--)
                System.out.print(numbers[j] + " ");
            System.out.println();
        }
    }
}
