package Alps0227;

import java.util.Scanner;

public class Codeup2633 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int arr[] = new int[100002];

		int num = scan.nextInt();
		int find = scan.nextInt();
		int answer = 0; // 실제 위치값
		int index = -1; // 배열의 위치값

		for (int i = 0; i < num; i++)
			arr[i] = scan.nextInt();

		for (int i = 0; i < num; i++) {
			if (arr[i] < find) { // 값이 작을 때만
				index = i;
				answer = i + 1;
			}
		}

		if (arr[index + 1] == find) // 바로 뒷 값이 같으면
			System.out.println(index + 2);
		else if (arr[index + 1] == 0 || index == 0) // 바로 뒷 값이 0이면(맨 마지막) or 위치값이 0이면
			System.out.println(num + 1);
		else // 바로 뒷 값보다 작을 때
			System.out.println(answer + 1);
	}
}