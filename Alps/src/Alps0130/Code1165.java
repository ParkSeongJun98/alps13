package Alps0130;

import java.util.Scanner;

public class Code1165 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);

		int time1, time2, goal; // ���� ���ð�, ���� �ð�, ���� ����
		int totalgoal; // �� ����

		System.out.print("���� ���ð��� �츮���� ������ �Է��Ͻÿ� : ");

		time1 = scan.nextInt();
		goal = scan.nextInt();

		time2 = 90 - time1; // ���� �ð� ���

		if (time2 % 5 == 0)
			totalgoal = goal + time2 / 5;
		else
			totalgoal = goal + time2 / 5 + 1;

		System.out.println(totalgoal);
	}
}