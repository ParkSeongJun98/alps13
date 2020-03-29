package Alps0213;

import java.util.Scanner;

public class Codeup1558 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		long num = scan.nextLong();

		System.out.println(Change(num));
	}

	public static long Change(long num) {

		int length;
		long arr[] = new long[100];

		// �迭�� ���ڸ��� �ֱ�
		for (length = 0; num > 0; length++) {
			arr[length] = num % 10;
			num /= 10;
		}

		long times = 1; // 10�� ���
		long result = 0; // ��°�

		// �Ųٷ�
		for (int i = length - 1; i >= 0; i--) {
			result += arr[i] * times;
			times *= 10;
		}

		return result;
	}
}