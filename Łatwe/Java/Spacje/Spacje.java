import java.util.Scanner;

class Spacje {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextLine()) {
            String str = in.nextLine();
            for (int i = 0; i < str.length(); i++) {
                if (str.charAt(i) == ' ') {
                    while (str.charAt(++i) == ' ')
                        System.out.print("");
                    System.out.print(Character.toUpperCase(str.charAt(i)));
                } else
                    System.out.print(str.charAt(i));
            }
            System.out.println();
        }
    }
}
