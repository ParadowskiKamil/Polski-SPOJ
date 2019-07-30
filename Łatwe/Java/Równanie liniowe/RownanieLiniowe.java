import java.util.Scanner;

class RownanieLiniowe {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = in.nextDouble();
        if (a == 0) {
            if (b == c)
                System.out.print("NWR");
            else
                System.out.print("BR");
        } else
            System.out.printf("%.2f", (c - b) / a);
    }
}
