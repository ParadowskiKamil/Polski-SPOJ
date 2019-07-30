import java.util.Scanner;

class RownanieKwadratowe {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextDouble()) {
            double a = in.nextDouble();
            double b = in.nextDouble();
            double c = in.nextDouble();
            if (b * b - 4 * a * c > 0)
                System.out.println(2);
            else if (b * b - 4 * a * c == 0)
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}
