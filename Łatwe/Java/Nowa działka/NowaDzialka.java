import java.util.Scanner;

class NowaDzialka {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int D = in.nextInt();
        for (int i = 0; i < D; i++) {
            int X = in.nextInt();
            System.out.println(X * X);
        }
    }
}
