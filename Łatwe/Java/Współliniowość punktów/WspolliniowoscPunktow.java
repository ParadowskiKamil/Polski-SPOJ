import java.io.*;
import java.util.StringTokenizer;

class WspolliniowoscPunktow {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        for (int i = 0; i < t; i++) {
            int[] x = new int[3];
            int[] y = new int[3];
            StringTokenizer st = new StringTokenizer(in.readLine());
            for (int j = 0; j < 3; j++) {
                x[j] = Integer.parseInt(st.nextToken());
                y[j] = Integer.parseInt(st.nextToken());
            }
            if (x[0] * y[1] + x[1] * y[2] + x[2] * y[0] - y[1] * x[2] - y[2] * x[0] - y[0] * x[1] == 0)
                System.out.println("TAK");
            else
                System.out.println("NIE");
        }
    }
}
