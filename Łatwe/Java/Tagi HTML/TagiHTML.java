import java.util.Scanner;

class TagiHTML {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextLine()) {
            String str = in.nextLine();
            for (int i = 0; i < str.length(); i++) {
                System.out.print(str.charAt(i));
                if (str.charAt(i) == '<') {
                    i++;
                    while (str.charAt(i) != '>')
                        System.out.print(Character.toUpperCase(str.charAt(i++)));
                    System.out.print(str.charAt(i));
                }
            }
            System.out.println();
        }
    }
}
