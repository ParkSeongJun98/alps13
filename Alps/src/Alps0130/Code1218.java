package Alps0130;

import java.util.Scanner;

public class Code1218 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int arr[] = new int[3];

		System.out.print("�� ���� ���� �Է� : ");

		for (int i = 0; i < arr.length; i++) {
			arr[i] = scan.nextInt();
		}

		// �������� ����
		for (int i = 0; i < arr.length - 1; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[i] < arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		// �ﰢ���� �� �� ���� ��
		if (arr[0] < arr[1] + arr[2]) {
			if (arr[0] == arr[1] && arr[1] == arr[2])
				System.out.println("���ﰢ��");
			else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0])
				System.out.println("�̵�ﰢ��");
			else if (Math.pow(arr[0], 2) == Math.pow(arr[1], 2) + Math.pow(arr[2], 2))
				System.out.println("�����ﰢ��");
			else
				System.out.println("�ﰢ��");
		} else
			System.out.println("�ﰢ�� �ƴ�");
	}
}