package Alps0130;

import java.util.Scanner;

public class Code1253 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num1, num2, num3;

		System.out.print("�� ���� �Է��Ͻÿ� : ");
		num1 = scan.nextInt();
		num2 = scan.nextInt();

		// ��� ������ ����
		num3 = Math.abs(num1 - num2) + 1;

		if (num1 > num2) {
			int temp = num1;
			num1 = num2;
			num2 = temp;
		}

		for (int i = 0; i < num3; i++) {
			System.out.print(num1 + " ");
			num1++;
		}
	}
}