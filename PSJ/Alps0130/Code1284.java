package Alps0130;

import java.util.ArrayList;
import java.util.Scanner;

public class Code1284 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		ArrayList<Integer> primeNum = new ArrayList<>(); // �������� ArrayList ���

		int num2, startNum = 2;
		int primeNum1 = 0, primeNum2 = 0; // �����
		boolean prime;

		System.out.print("���� �� ���� �Է��Ͻÿ� : ");

		int num1 = scan.nextInt();

		// �Է¹��� �������� �Ҽ����� ArrayList�� ����
		while (startNum <= num1) {
			prime = true;

			for (int i = 2; i < startNum; i++) {
				if (startNum % i == 0) {
					prime = false;
					break;
				}
			}

			if (prime == true)
				primeNum.add(startNum);
			startNum++;
		}

		prime = false; // �ʱ�ȭ

		for (int i = 0; i < primeNum.size(); i++) {
			if (num1 % primeNum.get(i) == 0) {
				num2 = num1 / primeNum.get(i);
				for (int j = i; j < primeNum.size(); j++) {
					if (primeNum.get(j) == num2) {
						primeNum1 = primeNum.get(i);
						primeNum2 = num2;
						prime = true;
						break;
					}
				}

				if (prime == true)
					break;
			}
		}

		if (prime == true)
			System.out.println(primeNum1 + " " + primeNum2);
		else
			System.out.println("wrong number");
	}
}