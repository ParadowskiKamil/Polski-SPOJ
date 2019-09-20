import java.util.Scanner;

class WiekSegmentolka {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            int lifeSpan = n - 1;
            for (int j = 0; j < n; j++) {
                int numberOfLegs = in.nextInt();
                lifeSpan += numberOfLegs;
            }
            System.out.println(lifeSpan);
        }
    }
}
