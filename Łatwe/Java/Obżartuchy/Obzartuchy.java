import java.io.*;
import java.util.StringTokenizer;

class Obzartuchy {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int testCases = Integer.parseInt(in.readLine());
        for (int i = 0; i < testCases; i++) {
            StringTokenizer st = new StringTokenizer(in.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            double eatenCookies = 0.0;
            for (int j = 0; j < N; j++) {
                int timeInSecondsPerGlutton = Integer.parseInt(in.readLine());
                eatenCookies += 86400 / timeInSecondsPerGlutton;
            }
            System.out.println((int) Math.ceil(eatenCookies / M));
        }
    }
}
