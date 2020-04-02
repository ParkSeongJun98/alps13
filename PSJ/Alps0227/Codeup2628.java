package Alps0227;

import java.util.Scanner;

public class Codeup2628 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int a = scan.nextInt();
		int b = scan.nextInt();
		int cd[] = new int[2];
		int count = 0;

		for (int i = 0; i < 2; i++)
			cd[i] = scan.nextInt();

		if (a > b) {
			int tmp = a;
			a = b;
			b = tmp;
		}

		// 둘 중 하나가 a와 b 사이에 있으면 cross
		for (int i = 0; i < 2; i++) {
			if (cd[i] > a && cd[i] < b)
				count++;
		}

		if (count == 1)
			System.out.println("cross");
		else
			System.out.println("not cross");
	}
}