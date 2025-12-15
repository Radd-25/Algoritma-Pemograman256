public class fungsi_min {
    public static void main(String[] args) {
        int a = 11;
        int b = 6;
        double c = 7.3;
        double d = 9.4;

        int hasil = fungsi_minimal(a, b);
        double hasil2 = fungsi_minimal(c, d);
        System.out.println("Nilai minimal = " + hasil);
        System.out.println("Nilai minimal = " + hasil2);
    }
    public static int fungsi_minimal(int a1, int a2) {
        int min;
        if (a1 > a2) {
            min = a2;
        } else {
            min = a1;
        }
        return min;
    }    public static double fungsi_minimal(double a1, double a2) {
        double min;
        if (a1 > a2) {
            min = a2;
        } else {
            min = a1;
        }
        return min;
    }
}
