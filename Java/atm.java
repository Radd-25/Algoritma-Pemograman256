import java.util.Scanner;

public class atm {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int saldo = 0;
        String nama;
        boolean check = false;
        int menu;


        do {
            System.out.print("Masukkan Nama Anda: ");
            nama = scanner.nextLine();

            System.out.print("Apakah nama anda benar? " + nama + " (1 untuk benar, 0 untuk salah): ");
            int confirm = scanner.nextInt();
            scanner.nextLine();

            if (confirm == 1) {
                check = true;
                System.out.print("Masukkan saldo awal anda (hanya angka): ");
                saldo = scanner.nextInt();
                scanner.nextLine();
            } else if (confirm == 0) {
                System.out.println("Baik, silakan coba lagi.\n");
            } else {
                System.out.println("Input tidak valid. Silakan masukkan 1 atau 0.\n");
            }

        } while (!check);

        System.out.println("\n=== Menu ATM ===");
        System.out.println("1. Cek Saldo");
        System.out.println("2. Tarik Tunai");
        System.out.println("3. Setor Tunai");
        System.out.println("4. Transfer");
        System.out.println("5. Keluar");
        System.out.print("\nPilih menu: ");
        menu = scanner.nextInt();
        scanner.nextLine();

        System.out.println();

        switch (menu) {
            case 1:
                System.out.println("Saldo anda saat ini adalah: Rp" + saldo);  
                break;

            case 2:
                System.out.print("Masukkan jumlah uang yang ingin ditarik: Rp ");
                int tarik = scanner.nextInt();

                System.out.print("Anda akan menarik Rp " + tarik + ". 1 untuk benar, 0 untuk salah: ");
                int konfirmasiTarik = scanner.nextInt();

                if (konfirmasiTarik == 1) {
                    if (tarik > saldo) {
                        System.out.println("Maaf saldo anda tidak mencukupi.");
                    } else {
                        saldo -= tarik;
                        System.out.println("Transaksi berhasil.");
                        System.out.println("Saldo anda saat ini: Rp" + saldo);
                    }
                } else {
                    System.out.println("Transaksi dibatalkan.");
                }
                break;

            case 3:
                System.out.print("Masukkan jumlah uang yang ingin disetor: Rp ");
                int setor = scanner.nextInt();
                saldo += setor;
                System.out.println("Transaksi berhasil.");
                System.out.println("Saldo anda saat ini: Rp" + saldo);
                break;

            case 4:
                System.out.print("Masukkan nomor rekening tujuan: ");
                String rek = scanner.nextLine();

                System.out.print("Masukkan jumlah uang yang ingin ditransfer: Rp ");
                int transfer = scanner.nextInt();

                if (transfer > saldo) {
                    System.out.println("Maaf saldo anda tidak mencukupi.");
                } else {
                    System.out.print("Anda akan mentransfer Rp " + transfer + " ke rekening " + rek +
                                     ". 1 untuk benar, 0 untuk salah: ");
                    int konfirmasiTransfer = scanner.nextInt();

                    if (konfirmasiTransfer == 1) {
                        saldo -= transfer;
                        System.out.println("Transaksi berhasil.");
                        System.out.println("Saldo anda saat ini: Rp" + saldo);
                    } else {
                        System.out.println("Transaksi dibatalkan.");
                    }
                }
                break;

            case 5:
                System.out.println("Sampai jumpa lagi!");
                break;

            default:
                System.out.println("Menu tidak tersedia.");
        }

        scanner.close();
    }
}
