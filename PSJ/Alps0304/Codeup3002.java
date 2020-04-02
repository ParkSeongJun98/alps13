package Alps0304;

import java.util.Scanner;

public class Codeup3002 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int cnt[] = new int[1000000];
		int n = scan.nextInt();

		for (int i = 0; i < n; i++)
			cnt[i] = scan.nextInt();

		int m = scan.nextInt();
		int ques[] = new int[m];

		for (int i = 0; i < m; i++)
			ques[i] = scan.nextInt();

		for (int i = 0; i < m; i++)
			System.out.print(search(cnt, ques[i], n) + " ");
	}

	// 이진 탐색
	public static int search(int cnt[], int num, int size) {

		int left = 0;
		int right = size - 1;
		int mid;

		while (left <= right) {
			mid = (left + right) / 2;
			if (cnt[mid] == num) // 값이 같으면 위치값 리턴
				return mid + 1;
			else { // 값이 다르면
				if (num > cnt[mid]) // 문제값이 크면
					left = mid + 1;
				else // 문제값이 작으면
					right = mid - 1;
			}
		}
		return -1; // 값이 없을 경우
	}
}