package Alps0213;

import java.util.Scanner;

public class Codeup1535 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int arr[] = new int[num];

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		System.out.println(Max(arr));
	}

	// �ִ��� ��ġ ����ϴ� �Լ�
	public static int Max(int arr[]) {

		int max = arr[0]; // �ִ�
		int index = 1; // ��ġ��

		for (int i = 1; i < arr.length; i++) {
			if (max < arr[i]) {
				max = arr[i];
				index = i + 1; // ��ġ + 1
			}
		}
		return index;
	}
}
