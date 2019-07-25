import java.util.Scanner;

class ProsteDodawanie {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            int sum = 0;
            for (int j = 0; j < n; j++) {
                int number = in.nextInt();
                sum += number;
            }
            System.out.println(sum);
        }
    }
}
