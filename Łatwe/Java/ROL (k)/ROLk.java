import java.util.Scanner;

class ROLk {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] numbers = new int[n];
        for (int i = 0; i < n; i++) {
            numbers[i] = in.nextInt();
            if (k <= i)
                System.out.print(numbers[i] + " ");
        }
        for (int i = 0; i < k; i++)
            System.out.print(numbers[i] + " ");
    }
}
