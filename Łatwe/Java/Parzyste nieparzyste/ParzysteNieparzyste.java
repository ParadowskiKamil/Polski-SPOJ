import java.util.Scanner;

class ParzysteNieparzyste {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            int[] numbers = new int[n];
            for (int j = 0; j < n; j++) {
                numbers[j] = in.nextInt();
                if (j % 2 == 1)
                    System.out.print(numbers[j] + " ");
            }
            for (int j = 0; j < n; j += 2)
                System.out.print(numbers[j] + " ");
            System.out.println();
        }
    }
}
