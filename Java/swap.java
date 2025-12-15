public class swap {
    public static void main(String[] args) {
        int a = 30;
        int b = 45;
        System.out.println("Swap adalah tempat menyimpan memori sementara");
        System.out.println("Nilai sebelum swap : a = " + a + ", b = " + b);
        ProsedurSwap(a, b);
}

    public static void ProsedurSwap(int a, int b) {
        int c;
        c = a;
        a = b;
        b = c;
        System.out.println("Nilai setelah swap : a = " + a + ", b = " + b);
    }
}
