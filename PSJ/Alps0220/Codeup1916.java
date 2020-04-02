package Alps0220;

import java.util.HashMap;
import java.util.Scanner;

public class Codeup1916 {

	// 메모이제이션 활용(계산의 중복 제거)
	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		HashMap<Integer, Integer> fb = new HashMap<>();
		System.out.println(fibonacci(fb, num));
	}

	public static int fibonacci(HashMap<Integer, Integer> fb, int num) {

		// 값이 있으면 가져옴
		if (fb.containsKey(num))
			return fb.get(num);
		else if (num <= 2)
			return 1;
		else { // 값이 없으면 계산 후 값 넣기
			int sum = fibonacci(fb, num - 1) + fibonacci(fb, num - 2);
			fb.put(num, sum);
			return sum % 10009;
		}
	}
}