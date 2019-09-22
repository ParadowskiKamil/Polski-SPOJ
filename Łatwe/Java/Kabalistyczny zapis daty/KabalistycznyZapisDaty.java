import java.util.Scanner;

class KabalistycznyZapisDaty {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.next();
        String alphabet = "abcdefghiklmnopqrstvxyz";
        int[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500};
        int year = 0;
        for (int i = 0; i < word.length(); i++) {
            for (int j = 0; j < alphabet.length(); j++) {
                if (word.charAt(i) == alphabet.charAt(j))
                    year += numbers[j];
            }
        }
        System.out.print(year);
    }
}
