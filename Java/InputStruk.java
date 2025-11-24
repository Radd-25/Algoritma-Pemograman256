import java.util.Scanner;
public class InputStruk {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Nama Barang: ");
        String nama = scanner.nextLine();

        System.out.print("Harga per Barang: ");
        double harga = scanner.nextDouble();
        
        System.out.print("Jumlah Barang: ");
        int jumlah = scanner.nextInt();

        double diskon = 0.02;
        double total = harga * jumlah;

        scanner.close();
    
        if (total > 15200) {
            diskon = total * 0.02;
        } else if (total < 15200) {
            diskon = 0.00;
        } 

        double total_bayar = harga - diskon;

        System.out.println("===== STRUK PEMBELIAN =====");
        System.out.println("Nama Barang   : Rp" + nama);
        System.out.println("Harga Satuan  : Rp" + harga);
        System.out.println("Jumlah Beli   : Rp" + jumlah);
        System.out.println("Total Harga   : Rp" + total);
        System.out.println("Diskon        : Rp" + diskon);
        System.out.println("Total Bayar   : Rp" + total_bayar);
        System.out.println("===========================");


    }
}