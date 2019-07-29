import java.util.Scanner;

class Polowa {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            String str = in.next();
            System.out.println(str.substring(0, str.length() / 2));
        }
    }
}
