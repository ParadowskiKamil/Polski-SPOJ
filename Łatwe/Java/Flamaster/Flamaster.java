import java.util.Scanner;

class Flamaster {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int C = in.nextInt();
        for (int i = 0; i < C; i++) {
            String str = in.next();
            printReducedString(str);
        }
    }

    public static void printReducedString(String str) {
        str += ' ';
        for (int j = 0; j < str.length() - 1; j++) {
            int counter = 1;
            while (str.charAt(j) == str.charAt(j + 1)) {
                counter++;
                j++;
            }
            System.out.print(str.charAt(j));
            if (counter > 2)
                System.out.print(counter);
            else if (counter == 2)
                System.out.print(str.charAt(j));
        }
        System.out.println();
    }
}
