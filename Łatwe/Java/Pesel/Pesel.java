import java.util.Scanner;

class Pesel {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            String pesel = in.next();
            int[] n = new int[11];
            for (int j = 0; j < 11; j++)
                n[j] = Character.getNumericValue(pesel.charAt(j));
            if ((n[0] + n[1] * 3 + n[2] * 7 + n[3] * 9 + n[4] + n[5] * 3 + n[6] * 7 + n[7] * 9 + n[8] + n[9] * 3 + n[10]) % 10 == 0)
                System.out.println('D');
            else
                System.out.println('N');
        }
    }
}
