import java.util.Scanner;

class SredniaArytmetyczna {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            int[] numbers = new int[n];
            double arithmeticMean = 0.0;
            for (int j = 0; j < n; j++) {
                numbers[j] = in.nextInt();
                arithmeticMean += numbers[j];
            }
            arithmeticMean /= n;
            double difference = Math.abs(arithmeticMean - numbers[0]);
            int answer = numbers[0];
            for (int number : numbers) {
                if (difference > Math.abs(arithmeticMean - number)) {
                    difference = Math.abs(arithmeticMean - number);
                    answer = number;
                }
            }
            System.out.println(answer);
        }
    }
}
