package Alps0130;

import java.util.Scanner;

public class Code1226 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int lotto[] = new int[7]; // �̹��� �ζ� ��ȣ
		int myNum[] = new int[6]; // ���� �ζ� ��ȣ
		int count = 0; // ���� ����
		boolean bonus = false; // ���ʽ� ��ȣ

		System.out.print("�ζ� ��ȣ�� �Է��Ͻÿ� : ");

		for (int i = 0; i < lotto.length; i++)
			lotto[i] = scan.nextInt();

		System.out.print("���� �ζ� ��ȣ�� �Է��Ͻÿ� : ");

		for (int i = 0; i < myNum.length; i++)
			myNum[i] = scan.nextInt();

		// ��ġ�ϸ� count++
		for (int i = 0; i < myNum.length; i++) {
			for (int j = 0; j < myNum.length; j++) {
				if (lotto[i] == myNum[j])
					count++;
			}
		}

		if (count == 6)
			System.out.println("1");
		else if (count == 5) {
			for (int i = 0; i < myNum.length; i++) {
				if (myNum[i] == lotto[6]) {
					bonus = true;
				}
			}
			if (bonus == true)
				System.out.println("2");
			else
				System.out.println("3");
		}

		else if (count == 4)
			System.out.println("4");
		else if (count == 3)
			System.out.println("5");
		else
			System.out.println("0");
	}
}