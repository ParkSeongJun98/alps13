package Alps0213;

import java.util.Scanner;

public class Codeup1545 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();

		Zero(num);
	}

	// 0���� �ƴ��� �Ǻ��ϴ� �Լ�
	public static void Zero(int num) {

		if (num == 0)
			System.out.println("zero");
		else
			System.out.println("non zero");
	}
}