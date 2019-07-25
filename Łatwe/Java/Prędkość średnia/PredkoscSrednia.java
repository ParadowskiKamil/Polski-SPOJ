import java.io.*;
import java.util.StringTokenizer;

class PredkoscSrednia {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        for (int i = 0; i < t; i++) {
            StringTokenizer st = new StringTokenizer(in.readLine());
            int v1 = Integer.parseInt(st.nextToken());
            int v2 = Integer.parseInt(st.nextToken());
            System.out.println(2 * v1 * v2 / (v1 + v2));
        }
    }
}
