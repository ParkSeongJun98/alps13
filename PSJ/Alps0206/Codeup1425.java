package Alps0206;

import java.util.Scanner;

public class Codeup1425 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int students = scan.nextInt(); // �л� ��
		int table = scan.nextInt(); // ���̺� ��
		int height[] = new int[students]; // Ű

		for (int i = 0; i < height.length; i++)
			height[i] = scan.nextInt();

		// �������� ����
		for (int i = 0; i < height.length - 1; i++) {
			for (int j = i + 1; j < height.length; j++) {
				if (height[i] > height[j]) {
					int temp = height[i];
					height[i] = height[j];
					height[j] = temp;
				}
			}
		}

		// ���
		for (int i = 0; i < height.length; i++) {
			if (i >= table && i % table == 0) // �� ���� ���̺�� �Ѿ ��
				System.out.println();
			System.out.print(height[i] + " ");
		}

	}
}