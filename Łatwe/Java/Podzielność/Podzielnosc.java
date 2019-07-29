import java.util.Scanner;

class Podzielnosc {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            int x = in.nextInt();
            int y = in.nextInt();
            for (int j = x; j < n; j += x) {
                if (j % y != 0)
                    System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
