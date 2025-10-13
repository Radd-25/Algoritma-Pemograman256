public class tugas2 {
    public static void main(String[] args) {
        final double PI = 3.14159;
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        System.out.print("Masukkan jari-jari lingkaran: ");
        double r = scanner.nextDouble();
        double area = PI * r * r;
        System.out.println("Luas lingkaran: " + area);
        scanner.close();
    }
}
