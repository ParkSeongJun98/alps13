package Alps0227;

import java.util.Scanner;

public class Codeup2631 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int sum = 0, count = 0, k = 0; // 합, 출력값
		int arr[] = new int[100001];

		int num = scan.nextInt();
		int answer = scan.nextInt();

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		for (int i = 0; i < num; i++) {
			sum += arr[i]; // 정답보다 클 때까지 더함
			if (sum == answer) // 정답이면 count++
				count++;
			else if (sum > answer) { // 정답보다 크면
				while (sum > answer) {
					sum -= arr[k++];
					// 정답보다 작을 때까지 맨처음의 값을 빼주면서 줄여줌
				}

				if (sum == answer)
					count++;
			}
		}

		System.out.println(count);
	}
}