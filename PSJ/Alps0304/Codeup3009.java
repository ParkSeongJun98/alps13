package Alps0304;

import java.util.Arrays;
import java.util.Scanner;

public class Codeup3009 {

	static int n, m;
	static int arr[];
	static int count = 0;

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		n = scan.nextInt();
		m = scan.nextInt();

		arr = new int[n];

		for (int i = 0; i < arr.length; i++)
			arr[i] = scan.nextInt();

		Arrays.sort(arr); // 정렬

		cnt(0, 0);

		if (m == 0) // 공집합인 경우
			System.out.println(count - 1);
		else
			System.out.println(count);
	}

	public static void cnt(int num1, int num2) {

		if (num1 == n) { // 모두 더하거나 뺐는지 확인
			if (num2 == m) // 합이면 count++
				count++;
			return;
		}

		cnt(num1 + 1, num2 + arr[num1]); // 현 위치
		cnt(num1 + 1, num2); // 그 다음 위치
	}
}