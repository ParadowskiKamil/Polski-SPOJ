import java.util.Scanner;

class SzyfrCezara {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNextLine()) {
            String caesarCipher = in.nextLine();
            for (int i = 0; i < caesarCipher.length(); i++) {
                if (caesarCipher.charAt(i) != ' ') {
                    if (caesarCipher.charAt(i) > 87)
                        System.out.print((char) (caesarCipher.charAt(i) - 23));
                    else
                        System.out.print((char) (caesarCipher.charAt(i) + 3));
                } else
                    System.out.print(' ');
            }
            System.out.println();
        }
    }
}
