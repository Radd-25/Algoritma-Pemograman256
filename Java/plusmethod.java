public class plusmethod {
    static int plusmetodint(int x, int y) {
        return x + y;
    }

    static double plusmetoddouble(double x, double y) {
        return x + y;
    }
    public static void main(String[] args) {
        int mynum1 = plusmetodint(8, 5);
        double mynum2 = plusmetoddouble(4.3, 6.26);

        System.out.println("Hasil penjumlahan integer: " + mynum1);
        System.out.println("Hasil penjumlahan double: " + mynum2);
    }
}
