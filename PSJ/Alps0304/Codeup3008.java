package Alps0304;

import java.util.Arrays;
import java.util.Scanner;

public class Codeup3008 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int arr[] = new int[9];
		int sum = 0;

		for (int i = 0; i < 9; i++) {
			arr[i] = scan.nextInt();
			sum += arr[i]; // ����� ��� ����
		}

		Arrays.sort(arr); // �������� ����

		for (int i = 0; i < 8; i++) {
			for (int j = i + 1; j < 9; j++) {
				if (sum - arr[i] - arr[j] == 100) {
					for (int k = 0; k < 9; k++) {
						if (k != i && k != j)
							System.out.println(arr[k]);
					}
				}
			}
		}
	}
}