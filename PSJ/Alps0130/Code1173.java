package Alps0130;

import java.util.Scanner;

public class Code1173 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int hour, min; // �ð�, ��

		System.out.print("�ð��� �� �Է� : ");

		hour = scan.nextInt();
		min = scan.nextInt();

		if (min < 30) {
			min = min + 30;
			if (hour == 0)
				hour = 23;
			else
				hour = hour - 1;
		} else
			min = min - 30;

		System.out.println(hour + " " + min);
	}
}