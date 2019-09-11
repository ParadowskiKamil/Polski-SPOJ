import java.util.Scanner;

class ZabawneDodawaniePiotrusia {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            StringBuilder n = new StringBuilder(in.next());
            int counter = 0;
            while (!isPalindrome(n)) {
                int newNumber = Integer.parseInt(n.toString());
                n.reverse();
                int tempNumber = Integer.parseInt(n.toString());
                newNumber += tempNumber;
                n = new StringBuilder(String.valueOf(newNumber));
                counter++;
            }
            System.out.println(n + " " + counter);
        }
    }

    public static boolean isPalindrome(StringBuilder number) {
        for (int i = 0; i < number.length() / 2; i++) {
            if (number.charAt(i) != number.charAt(number.length() - i - 1))
                return false;
        }
        return true;
    }
}
