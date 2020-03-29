package Alps0220;

import java.util.Scanner;

public class Codeup1615 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num1 = scan.nextInt();
		int num2 = scan.nextInt();

		System.out.println(SelfNumber(num1, num2));
	}

	// �����ѹ��� �� ��ȯ�ϴ� �Լ�
	public static int SelfNumber(int num1, int num2) {

		int selfNum[] = new int[5001];
		int sum = 0;

		for (int i = 1; i <= num2; i++) {
			if (Check(i) <= 5000)
				selfNum[Check(i)] = 1;
		}

		for (int i = num1; i <= num2; i++) {
			if (selfNum[i] == 0) // �����ѹ��� �͸� ���ؼ� ��ȯ
				sum += i;
		}

		return sum;
	}

	// �����ѹ� üũ �Լ�
	public static int Check(int num) {

		int sum = num;

		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}

		return sum;
	}
}