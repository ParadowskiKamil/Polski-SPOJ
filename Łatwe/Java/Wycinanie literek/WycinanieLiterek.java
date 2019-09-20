import java.util.Scanner;

class WycinanieLiterek {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            char c = in.next().charAt(0);
            String word = in.next();
            for (int i = 0; i < word.length(); i++) {
                if (word.charAt(i) != c)
                    System.out.print(word.charAt(i));
            }
            System.out.println();
        }
    }
}
