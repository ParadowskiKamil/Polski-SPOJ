import java.util.Scanner;

class GraEuklidesa {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            while (a != b) {
                if (a > b)
                    a -= b;
                else
                    b -= a;
            }
            System.out.println(a + b);
        }
    }
}
