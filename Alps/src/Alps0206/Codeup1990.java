package Alps0206;

import java.math.BigDecimal;
import java.util.Scanner;

public class Codeup1990 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		BigDecimal num1;
		BigDecimal num2 = new BigDecimal(3);

		num1 = scan.nextBigDecimal();

		// �� - remainder ������ ���ϱ�
		if (num1.remainder(num2) == BigDecimal.ZERO) // BigDecimal.ZERO -> 0���� ���ǵǾ�����.
			System.out.println(1);
		else
			System.out.println(0);
	}
}