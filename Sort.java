import java.util.Scanner;

public class Sort {
    public static void main(String[] args) {
        int n;
        System.out.println("Enter size of your array:");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int A[] = new int[n];
        System.out.println("Enter Array Elements:");
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();
        }
        int temp;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (A[i] > A[j]) {
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        System.out.println("Array after sorting in Ascending order is :");
        for (int i = 0; i < n; i++) {
            System.out.print(A[i] + " ");
        }
        System.out.println("");
        System.out.println("Array after sorting in Descending order is :");
        for (int i = n - 1; i >= 0; i--) {
            System.out.print(A[i] + " ");
        }
        sc.close();
    }
}
