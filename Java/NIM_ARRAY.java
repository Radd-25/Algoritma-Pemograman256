import java.util.Collections;
import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class NIM_ARRAY {

    public static List<Integer> nimToDigits(String nimStr) {
        List<Integer> digits = new ArrayList<>();
        
        for (char c : nimStr.toCharArray()) {
            digits.add(Character.getNumericValue(c));
        }
        return digits;
    }

    public static void printList(List<Integer> list) {
        System.out.print("[");
        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + (i == list.size() - 1 ? "" : ", "));
        }
        System.out.print("]");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Masukan NIM: ");
        String nimInput = scanner.nextLine();
        scanner.close();

        List<Integer> digits = nimToDigits(nimInput);
        int arraySize = digits.size();

        if (arraySize == 0) {
            System.out.println("NIM tidak valid atau kosong.");
            return;
        }

        System.out.print("Array Digit: ");
        printList(digits);
        System.out.println();
        System.out.println("-------------------------");

        int totalValue = 0;
        for (int digit : digits) {
            totalValue += digit;
        }

        int maxVal = Collections.max(digits);
        int minVal = Collections.min(digits);

        double average = (double)totalValue / arraySize;

        List<Integer> reversedArray = new ArrayList<>(digits);
        Collections.reverse(reversedArray);

        System.out.println("Total Nilai: " + totalValue);
        System.out.println("Nilai Max: " + maxVal);
        System.out.println("Nilai Min: " + minVal);
        System.out.println("Rata-rata: " + String.format("%.2f", average));
        
        System.out.print("Array Terbalik: ");
        printList(reversedArray);
        System.out.println();
    }
}