package Alps0220;

import java.util.Scanner;

public class Codeup3704 {

	static int stair[] = new int[100001];

	// 실행 중 에러
	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		System.out.println(Stairs(num));
	}

	public static int Stairs(int num) {

		if (num < 0)
			return 0;
		else if (num == 0)
			return 1;
		else {
			if (stair[num] == 0)
				stair[num] = (Stairs(num - 1) + Stairs(num - 2) + Stairs(num - 3)) % 1000;
			return stair[num];
		}
	}
}