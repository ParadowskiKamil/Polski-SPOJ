import java.util.Scanner;

class SumyWielokrotne {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long sumOfAllSums = 0L;
        while (in.hasNextInt()) {
            long sum = 0L;
            int number = in.nextInt();
            sum += number;
            while (number != 0) {
                number = in.nextInt();
                sum += number;
            }
            sumOfAllSums += sum;
            System.out.println(sum);
        }
        System.out.print(sumOfAllSums);
    }
}
