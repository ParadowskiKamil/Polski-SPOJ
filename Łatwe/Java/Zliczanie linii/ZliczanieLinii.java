import java.util.Scanner;

class ZliczanieLinii {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int lineCounter = 0;
        while (in.hasNextLine()) {
            String line = in.nextLine();
            lineCounter++;
        }
        System.out.print(lineCounter);
    }
}
