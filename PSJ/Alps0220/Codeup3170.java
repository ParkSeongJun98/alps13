package Alps0220;

import java.util.HashMap;
import java.util.Scanner;

public class Codeup3170 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		HashMap<String, Integer> quiz = new HashMap<String, Integer>();

		int N = scan.nextInt();
		int M = scan.nextInt();
		scan.nextLine();
		
		for (int i = 0; i < N; i++) {
			String[] arr = scan.nextLine().split(" ");
			String key = arr[0];
			int value = Integer.parseInt(arr[1]);

			// 같은 입력값이 있으면
			if (quiz.containsKey(arr[0])) {
				int sum = quiz.get(arr[0]) + value;
				quiz.put(key, sum);
			}

			else
				quiz.put(key, value);
		}

		for (int i = 0; i < M; i++) {
			String question = scan.nextLine();

			if (quiz.containsKey(question))
				System.out.println(quiz.get(question));
			else
				System.out.println(0);
		}
	}
}