package Alps0227;

import java.util.Scanner;

public class Codeup2631 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int sum = 0, count = 0, k = 0; // ��, ��°�
		int arr[] = new int[100001];

		int num = scan.nextInt();
		int answer = scan.nextInt();

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		for (int i = 0; i < num; i++) {
			sum += arr[i]; // ���亸�� Ŭ ������ ����
			if (sum == answer) // �����̸� count++
				count++;
			else if (sum > answer) { // ���亸�� ũ��
				while (sum > answer) {
					sum -= arr[k++];
					// ���亸�� ���� ������ ��ó���� ���� ���ָ鼭 �ٿ���
				}

				if (sum == answer)
					count++;
			}
		}

		System.out.println(count);
	}
}