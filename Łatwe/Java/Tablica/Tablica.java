import java.util.*;

class Tablica {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> numbers = new ArrayList<>();
        while (in.hasNextInt())
            numbers.add(in.nextInt());
        for (int i = numbers.size() - 1; i >= 0; i--)
            System.out.print(numbers.get(i) + " ");
    }
}
