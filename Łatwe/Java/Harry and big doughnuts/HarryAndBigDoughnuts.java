import java.util.Scanner;

class HarryAndBigDoughnuts {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int c = in.nextInt();
            int k = in.nextInt();
            int w = in.nextInt();
            if (c * w <= k)
                System.out.println("yes");
            else
                System.out.println("no");
        }
    }
}
