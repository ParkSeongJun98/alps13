package Alps0220;

import java.util.HashMap;
import java.util.Scanner;

public class Codeup1916 {

	// �޸������̼� Ȱ��(����� �ߺ� ����)
	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		HashMap<Integer, Integer> fb = new HashMap<>();
		System.out.println(fibonacci(fb, num));
	}

	public static int fibonacci(HashMap<Integer, Integer> fb, int num) {

		// ���� ������ ������
		if (fb.containsKey(num))
			return fb.get(num);
		else if (num <= 2)
			return 1;
		else { // ���� ������ ��� �� �� �ֱ�
			int sum = fibonacci(fb, num - 1) + fibonacci(fb, num - 2);
			fb.put(num, sum);
			return sum % 10009;
		}
	}
}