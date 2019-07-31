import java.util.Scanner;

class CzyUmieszPotegowac {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int D = in.nextInt();
        for (int i = 0; i < D; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            printDigitOfUnityOfPower(a, b);
        }
    }

    public static void printDigitOfUnityOfPower(int a, int b) {
        int[][] firstFourDigitsOfFirstTenPowers = {
                {0, 0, 0, 0},
                {1, 1, 1, 1},
                {6, 2, 4, 8},
                {1, 3, 9, 7},
                {6, 4, 6, 4},
                {5, 5, 5, 5},
                {6, 6, 6, 6},
                {1, 7, 9, 3},
                {6, 8, 4, 2},
                {1, 9, 1, 9}
        };
        System.out.println(firstFourDigitsOfFirstTenPowers[a % 10][b % 4]);
    }
}
