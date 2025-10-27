import java.util.Scanner;
public class nilai_akhir {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("masukan nilai tugas : ");
    double tugas = sc.nextDouble();
    System.out.print("masukan nilai uts : ");
    double uts = sc.nextDouble();
    System.out.print("masukan nilai uas : ");
    double uas = sc.nextDouble();

    double nilai_akhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);

    System.out.println("nilai akhir: " + nilai_akhir);
    if (nilai_akhir >= 60) {
        System.out.println("Status : Lulus");
    } else {
        System.out.println("Status : Tidak Lulus");
    }

    sc.close();
}
}