import java.util.Scanner;

class ZliczanieWystapien {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextInt()) {
            int target = in.nextInt();
            int length = in.nextInt();
            int[] numbers = new int[length];
            int counter = 0;
            for (int number : numbers) {
                number = in.nextInt();
                if (number == target)
                    counter++;
            }
            System.out.println(counter);
        }
    }
}
