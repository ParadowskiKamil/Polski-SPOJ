import java.util.Scanner;

class ZliczaczLiter {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = Integer.parseInt(in.nextLine());
        int[] letterCounter = new int[52];
        char[] alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
        for (int i = 0; i < N; i++) {
            String str = in.nextLine();
            for (int j = 0; j < 52; j++) {
                for (int k = 0; k < str.length(); k++) {
                    if (str.charAt(k) == alphabet[j])
                        letterCounter[j]++;
                }
            }
        }
        for (int i = 0; i < 52; i++) {
            if (letterCounter[i] > 0)
                System.out.println(alphabet[i] + " " + letterCounter[i]);
        }
    }
}
