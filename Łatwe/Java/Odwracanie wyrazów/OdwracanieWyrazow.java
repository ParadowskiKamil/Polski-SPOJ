import java.util.Scanner;

class OdwracanieWyrazow {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            StringBuilder word = new StringBuilder(in.next());
            System.out.println(word.reverse());
        }
    }
}
