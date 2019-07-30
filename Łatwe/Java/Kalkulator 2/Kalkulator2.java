import java.util.Scanner;

class Kalkulator2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] memory = new int[10];
        while (in.hasNext()) {
            char sign = in.next().charAt(0);
            int index = in.nextInt();
            int number = in.nextInt();
            if (sign == 'z')
                memory[index] = number;
            else
                System.out.println(calculateTwoIntegers(memory, sign, index, number));
        }
    }

    static int calculateTwoIntegers(int[] memory, char sign, int index, int number) {
        switch (sign) {
            case '+':
                return memory[index] + memory[number];
            case '-':
                return memory[index] - memory[number];
            case '*':
                return memory[index] * memory[number];
            case '/':
                return memory[index] / memory[number];
            default:
                return memory[index] % memory[number];
        }
    }
}
