package Alps0206;

import java.util.Scanner;

public class Codeup1498 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int arrNum = scan.nextInt(); // �迭 ����
		int cut = scan.nextInt();	 // �ڸ��� ��
		int arr[] = new int[arrNum]; // �迭 ����

		for (int i = 0; i < arr.length; i++)
			arr[i] = scan.nextInt();

		for (int i = 0; i < arr.length; i += cut) {
			int min = arr[i]; // �ּڰ�
			for (int j = 0; j < cut; j++) { // �ڸ��� ������ �ݺ�
				if (i + j >= arr.length) // �迭�� ���� �Ѿ�� �ߴ�
					break;
				if (min > arr[i + j]) // �ּڰ� ���ϱ�
					min = arr[i + j];
			}
			System.out.print(min + " ");
		}
	}
}