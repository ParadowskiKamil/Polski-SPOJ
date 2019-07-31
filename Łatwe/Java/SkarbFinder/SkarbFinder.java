import java.util.Scanner;

class SkarbFinder {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int D = in.nextInt();
        for (int i = 0; i < D; i++) {
            int N = in.nextInt();
            int x = 0;
            int y = 0;
            for (int j = 0; j < N; j++) {
                int a = in.nextInt();
                int b = in.nextInt();
                if (a < 2)
                    y += calculatePath(a, b);
                else
                    x += calculatePath(a, b);
            }
            showPath(x, y);
        }
    }

    public static int calculatePath(int a, int b) {
        switch (a) {
            case 0:
                return b;
            case 1:
                return -b;
            case 2:
                return -b;
            default:
                return b;
        }
    }

    public static void showPath(int x, int y) {
        if (x == 0 && y == 0)
            System.out.println("studnia");
        else {
            if (y > 0)
                System.out.println("0 " + y);
            if (y < 0)
                System.out.println("1 " + Math.abs(y));
            if (x < 0)
                System.out.println("2 " + Math.abs(x));
            if (x > 0)
                System.out.println("3 " + x);
        }
    }
}
