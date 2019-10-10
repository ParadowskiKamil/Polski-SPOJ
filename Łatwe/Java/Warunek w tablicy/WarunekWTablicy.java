import java.util.Scanner;

class WarunekWTablicy {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] numbers = new int[n];
        for (int i = 0; i < n; i++)
            numbers[i] = in.nextInt();
        char sign = in.next().charAt(0);
        int x = in.nextInt();
        for (int number : numbers) {
            if (sign == '<' && number < x)
                System.out.println(number);
            else if (sign == '>' && number > x)
                System.out.println(number);
        }
    }
}
