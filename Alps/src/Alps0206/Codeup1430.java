package Alps0206;

import java.util.Scanner;

public class Codeup1430 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int number[] = new int[10000001]; // �迭�� 0���� �ʱ�ȭ
		int num1 = scan.nextInt();

		// �Է¹��� �͸� 1�� �ٲ�
		for (int i = 0; i < num1; i++) {
			int a = scan.nextInt();
			number[a] = 1;
		}

		int num2 = scan.nextInt();

		// �Է¹��� �迭�� ���� ���
		for (int i = 0; i < num2; i++) {
			int a = scan.nextInt();
			System.out.print(number[a] + " ");
		}
	}
}