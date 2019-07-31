import java.util.Scanner;

class Kalkulator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            char sign = in.next().charAt(0);
            int firstNumber = in.nextInt();
            int secondNumber = in.nextInt();
            System.out.println(calculateTwoIntegers(sign, firstNumber, secondNumber));
        }
    }

    public static int calculateTwoIntegers(char sign, int firstNumber, int secondNumber) {
        switch (sign) {
            case '+':
                return firstNumber + secondNumber;
            case '-':
                return firstNumber - secondNumber;
            case '*':
                return firstNumber * secondNumber;
            case '/':
                return firstNumber / secondNumber;
            default:
                return firstNumber % secondNumber;
        }
    }
}
