package Alps0130;

import java.util.Scanner;

public class Code1205 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		double num1, num2, max = Integer.MIN_VALUE; // ���� ���� ���� �־����
		double arr[] = new double[7]; // �Ҽ��� ����° �ڸ����� ����ؾ��ϹǷ� double�� ����

		System.out.print("�� ���� �Է��ϼ��� : ");

		num1 = scan.nextDouble();
		num2 = scan.nextDouble();

		arr[0] = num1 + num2; // ����(�ٲ㼭 ���ص� ����)

		if (num1 > num2) // ����(�� ������ ū ���� �迭�� ����)
			arr[1] = num1 - num2;
		else
			arr[1] = num2 - num1;

		arr[2] = num1 * num2; // ����(�ٲ㼭 ���ص� ����)
		arr[3] = num1 / num2; // ������
		arr[4] = num2 / num1;
		arr[5] = Math.pow(num1, num2); // �ŵ�����
		arr[6] = Math.pow(num2, num1);

		// �ִ� ���ϱ�
		for (int i = 0; i < arr.length; i++) {
			if (max < arr[i])
				max = arr[i];
		}

		System.out.printf("%.6f", max); // �ִ� ����°�ڸ����� ���
	}
}