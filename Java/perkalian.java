public class perkalian {
    public static void main(String[] args) {
        System.err.println("prosedur = sub pogram yang tidak mengembalikan nilai");
        perkaliaan(5, 10);
        perkaliaan(2, 3);
        perkaliaan(6, 8);

        pembagian(20, 5);
        pembagian(100, 10);
        pembagian(66, 11);
    }
    
    public static void perkaliaan(int a, int b) {
    System.out.println("Hasil prosedur perkalian " + a + " x " + b + " = " + (a * b));
}

public static void pembagian(int a, int b) {
    System.out.println("Hasil prosedur pembagian " + a + " : " + b + " = " + (a / b));
}
}


