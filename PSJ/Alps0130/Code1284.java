package Alps0130;

import java.util.ArrayList;
import java.util.Scanner;

public class Code1284 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		ArrayList<Integer> primeNum = new ArrayList<>(); // �������� ArrayList ���

		System.out.print("���� �� ���� �Է��Ͻÿ� : ");

		int num1 = scan.nextInt();

		while (true) {
			for (int i = 2; i <= num1; i++) {
				if (num1 % i == 0) {
					primeNum.add(i);
					num1 /= i;
					i = 1;
				}
			}

			if (num1 == 1)
				break;
		}

		if (primeNum.size() == 2)
			System.out.println(primeNum.get(0) + " " + primeNum.get(1));
		else
			System.out.println("wrong number");
	}
}