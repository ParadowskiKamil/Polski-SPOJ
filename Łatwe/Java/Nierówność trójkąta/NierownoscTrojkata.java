import java.util.Scanner;

class NierownoscTrojkata {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextDouble()) {
            double a = in.nextDouble();
            double b = in.nextDouble();
            double c = in.nextDouble();
            if (Math.abs(b - c) < a && a < b + c)
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}
