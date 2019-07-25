import java.util.Scanner;

class DwieCyfrySilni {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int D = in.nextInt();
        String[] digits = {"0 1", "0 1", "0 2", "0 6", "2 4", "2 0", "2 0", "4 0", "2 0", "8 0"};
        for (int i = 0; i < D; i++) {
            int n = in.nextInt();
            if (n < 10)
                System.out.println(digits[n]);
            else
                System.out.println("0 0");
        }
    }
}
