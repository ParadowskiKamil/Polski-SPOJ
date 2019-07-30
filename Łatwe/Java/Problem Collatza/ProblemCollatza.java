import java.util.Scanner;

class ProblemCollatza {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int s = in.nextInt();
            int n = 0;
            while (s != 1) {
                if (s % 2 == 0)
                    s /= 2;
                else
                    s = 3 * s + 1;
                n++;
            }
            System.out.println(n);
        }
    }
}
