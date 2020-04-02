package Alps0227;

import java.util.Scanner;

public class Codeup3733 {
	// 시간초과
	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num1 = scan.nextInt();
		int num2 = scan.nextInt();

		int answer[] = new int[2]; // 출력값
		answer[0] = num1;
		answer[1] = Collatz(num1, 1);

		int max = Collatz(num1, 1);

		for (int i = num1 + 1; i <= num2; i++) {
			int count2 = Collatz(i, 1);
			if (max < count2) {
				answer[0] = i;
				answer[1] = max = count2;
			}
		}

		System.out.println(answer[0] + " " + answer[1]);
	}

	// 조건 함수
	public static int Collatz(long num, int length) {

		if (num != 1) {
			if (num % 2 == 1) {
				num = num * 3 + 1;
				length++;
			}

			else {
				num /= 2;
				length++;
			}

			return Collatz(num, length);
		}

		else
			return length;
	}

	// 크기 비교 함수
	public static int max(int count1, int count2) {

		int maxNum = (count1 >= count2) ? count1 : count2;

		return maxNum;
	}
}