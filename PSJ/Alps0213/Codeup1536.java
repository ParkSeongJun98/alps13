package Alps0213;

import java.util.Scanner;

public class Codeup1536 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int arr[] = new int[num];

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		System.out.println(Min(arr));
	}

	// �ּڰ� ����ϴ� �Լ�
	public static int Min(int arr[]) {

		int min = arr[0]; // �ּڰ�

		for (int i = 1; i < arr.length; i++) {
			if (min > arr[i])
				min = arr[i];
		}
		return min;
	}
}