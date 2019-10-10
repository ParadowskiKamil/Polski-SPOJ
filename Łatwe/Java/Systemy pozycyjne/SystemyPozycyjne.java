import java.util.Scanner;

class SystemyPozycyjne {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            System.out.println(Integer.toHexString(n).toUpperCase() + " " + toUndecimal(n));
        }
    }

    public static String toUndecimal(int n) {
        int[] firstSixPowersOfEleven = {161051, 14641, 1331, 121, 11, 1};
        int i = 0;
        while (firstSixPowersOfEleven[i] > n)
            i++;
        String answer = "";
        while (i < 6) {
            int digit = n / firstSixPowersOfEleven[i];
            n %= firstSixPowersOfEleven[i];
            i++;
            if (digit == 10)
                answer += 'A';
            else
                answer += digit;
        }
        return answer;
    }
}
