package Alps0130;

import java.util.Scanner;

public class Code1180 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num; // ������ ��
		int Fnum, Snum; // ���� �ڸ�, ���� �ڸ�
		int trash; // ������

		System.out.print("���� �Է� (1~99) : ");

		num = scan.nextInt();

		Fnum = num / 10;
		Snum = num % 10;

		// ���� �ڸ��� ���� �ڸ� �ٲٱ�
		int temp = Fnum;
		Fnum = Snum;
		Snum = temp;

		trash = (Fnum * 10 + Snum) * 2; // ������ ��

		// 100�� ���� �� 100�� �ڸ��� ����
		if (trash >= 100)
			trash = trash % 100;

		System.out.println(trash);

		if (trash > 50)
			System.out.println("OH MY GOD");
		else
			System.out.println("GOOD");
	}
}