import java.util.*;

class Sort1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int n = in.nextInt();
            String[] names = new String[n];
            int[] x = new int[n];
            int[] y = new int[n];
            double[] distances = new double[n];
            for (int j = 0; j < n; j++) {
                names[j] = in.next();
                x[j] = in.nextInt();
                y[j] = in.nextInt();
                distances[j] = Math.sqrt(x[j] * x[j] + y[j] * y[j]);
            }
            double[] originalDistances = distances.clone();
            Arrays.sort(distances);
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (originalDistances[k] == distances[j])
                        System.out.println(names[k] + " " + x[k] + " " + y[k]);
                }
            }
        }
    }
}
