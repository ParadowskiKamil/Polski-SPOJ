import java.util.Scanner;

class Imieniny {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int D = in.nextInt();
        for (int i = 0; i < D; i++) {
            int L = in.nextInt();
            int C = in.nextInt();
            if (L > 1 && C % --L == 0)
                System.out.println("NIE");
            else
                System.out.println("TAK");
        }
    }
}
