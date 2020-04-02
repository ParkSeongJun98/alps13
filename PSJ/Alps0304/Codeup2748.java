package Alps0304;

import java.util.Scanner;

public class Codeup2748 {

	static int n, m;
	static int arr[];
	static int count = 0;

	// 문제 : 입력된 수 모두를 더하거나 빼서 숫자 만들기
	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		n = scan.nextInt();
		m = scan.nextInt();

		arr = new int[m];

		for (int i = 0; i < arr.length; i++)
			arr[i] = scan.nextInt();

		cnt(0, 0);

		System.out.println(count);
	}

	public static void cnt(int sum, int index) {

		if (index == m) { // 모두 더하거나 뺐는지 확인
			if (n == sum) // 합이면 count++
				count++;
			return;
		}

		cnt(sum + arr[index], index + 1);
		cnt(sum - arr[index], index + 1);
	}
}