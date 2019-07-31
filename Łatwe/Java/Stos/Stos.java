import java.util.Scanner;

class Stos {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] stack = new int[10];
        int index = 0;
        while (in.hasNext()) {
            char sign = in.next().charAt(0);
            if (sign == '+') {
                int number = in.nextInt();
                if (index < 10) {
                    stack[index++] = number;
                    System.out.println(":)");
                } else
                    System.out.println(":(");
            } else {
                if (index > 0)
                    System.out.println(stack[--index]);
                else
                    System.out.println(":(");
            }
        }
    }
}
