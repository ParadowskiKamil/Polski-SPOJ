import java.util.Scanner;

class PolePewnegoKola {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double r = in.nextDouble();
        double d = in.nextDouble();
        double S = (r * r - d * d / 4) * Math.PI;
        System.out.printf("%.2f", S);
    }
}
