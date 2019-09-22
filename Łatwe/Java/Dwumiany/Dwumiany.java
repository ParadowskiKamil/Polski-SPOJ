import java.util.Scanner;

class Dwumiany {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int i = 0; i < T; i++) {
            int n = in.nextInt();
            int k = in.nextInt();
            System.out.println(binomialCoefficient(n, k));
        }
    }

    public static int binomialCoefficient(int n, int k) {
        if (k > n - k)
            k = n - k;
        long answer = 1L;
        for (int i = 0; i < k; i++) {
            answer *= n - i;
            answer /= i + 1;
        }
        return (int) answer;
    }
}
