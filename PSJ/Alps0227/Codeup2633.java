package Alps0227;

import java.util.Scanner;

public class Codeup2633 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int arr[] = new int[100002];

		int num = scan.nextInt();
		int find = scan.nextInt();
		int answer = 0; // ���� ��ġ��
		int index = -1; // �迭�� ��ġ��

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		for (int i = 0; i < num; i++) {
			if (arr[i] < find) { // ���� ���� ����
				index = i;
				answer = i + 1;
			}
		}

		if (arr[index + 1] == find) // �ٷ� �� ���� ������
			System.out.println(index + 2);
		else if (arr[index + 1] == 0 || index == 0) // �ٷ� �� ���� 0�̸�(�� ������) or ��ġ���� 0�̸�
			System.out.println(num + 1);
		else // �ٷ� �� ������ ���� ��
			System.out.println(answer + 1);
	}
}