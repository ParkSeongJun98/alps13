package Alps0213;

import java.util.Arrays;
import java.util.Scanner;

public class Codeup3004 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int arr1[] = new int[num]; // �Է¹��� �迭
		int arr2[] = new int[num]; // ���� �迭
		int index[] = new int[num]; // �ε��� �迭

		for (int i = 0; i < num; i++) {
			arr1[i] = scan.nextInt();
			arr2[i] = arr1[i];
		}

		Arrays.parallelSort(arr2); // ó���� �����Ͱ� ���� �� ����

		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num; j++) {
				if (arr2[i] == arr1[j]) {
					index[j] = i; // ������ �����Ϳ� �Է¹��� �迭�� ������ �ε��� �� �ֱ�
					break;
				}
			}
		}

		for (int i = 0; i < num; i++)
			System.out.print(index[i] + " ");
	}
}