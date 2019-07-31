import java.util.Scanner;

class StringMerge {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            String firstString = in.next();
            String secondString = in.next();
            System.out.println(string_merge(firstString, secondString));
        }
    }

    public static String string_merge(String firstString, String secondString) {
        String mergedString = "";
        if (firstString.length() > secondString.length()) {
            for (int i = 0; i < secondString.length(); i++)
                mergedString += firstString.charAt(i) + "" + secondString.charAt(i);
        } else {
            for (int i = 0; i < firstString.length(); i++)
                mergedString += firstString.charAt(i) + "" + secondString.charAt(i);
        }
        return mergedString;
    }
}
