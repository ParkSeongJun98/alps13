package Alps0206;

import java.math.BigDecimal;
import java.util.Scanner;

public class Codeup1754 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		BigDecimal num1, num2; // ū ���� ���� �� ���

		num1 = scan.nextBigDecimal();
		num2 = scan.nextBigDecimal();

		// ���� ��
		if (num1.compareTo(num2) > 0)
			System.out.println(num2 + " " + num1);
		else
			System.out.println(num1 + " " + num2);
	}
}