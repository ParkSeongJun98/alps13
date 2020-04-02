package Alps0227;

import java.util.Scanner;

public class Codeup4564 {

	static int memo[] = new int[301];
	static int stairs[] = new int[301];

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();

		for (int i = 1; i <= num; i++)
			stairs[i] = scan.nextInt();

		System.out.println(cal(num));
	}

	public static int cal(int num) {

		if (num < 0)
			return 0;
		if (num == 1)
			return memo[1] = stairs[1];
		if (num == 2)
			return memo[2] = stairs[1] + stairs[2];
		if (memo[num] != 0)
			return memo[num];
		else
			return memo[num] = ((cal(num - 3) + stairs[num - 1] > cal(num - 2)) ? (cal(num - 3) + stairs[num - 1])
					: cal(num - 2)) + stairs[num];
	}
}