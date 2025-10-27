import java.util.Scanner;
public class Perbandingan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan nilai pertama: ");
        double a = sc.nextDouble();
        System.out.print("Masukkan nilai kedua: ");
        double b = sc.nextDouble();

        if (a > b) {
            System.out.println(a + " lebih besar dari " + b);
        } else if (a < b) {
            System.out.println(a + " lebih kecil dari " + b);
        } else {
            System.out.println(a + " sama dengan " + b);
        }

        sc.close();
    }
}
