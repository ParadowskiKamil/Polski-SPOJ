import java.util.Scanner;

class ROL {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            int[] numbers = new int[n];
            numbers[0] = in.nextInt();
            for (int j = 1; j < n; j++) {
                numbers[j] = in.nextInt();
                System.out.print(numbers[j] + " ");
            }
            System.out.println(numbers[0]);
        }
    }
}
