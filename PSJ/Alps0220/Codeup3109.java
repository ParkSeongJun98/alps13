package Alps0220;

import java.util.Scanner;

public class Codeup3109 {

	// 시간 초과
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		String id[][] = new String[num][3];
		int count = 1;

		// 입력값 받기
		for (int i = 0; i < num; i++) {
			id[i][0] = scan.next();
			id[i][1] = scan.next();
			id[i][2] = scan.next();
		}

		// 문제 조건
		for (int i = 0; i < num; i++) {
			if (id[i][0].equals("I")) {
				for (int j = 0; j < i; j++) {
					if (id[i][1].equals(id[j][1]) && id[j][0].equals("I")) {
						for (int k = j; k < i; k++) {
							String temp = id[j][0];
							id[j][0] = id[i][0];
							id[i][0] = temp;

							temp = id[j][1];
							id[j][1] = id[i][1];
							id[i][1] = temp;

							temp = id[j][2];
							id[j][2] = id[i][2];
							id[i][2] = temp;
						}
					}
				}
			}

			if (id[i][0].equals("D")) {
				for (int j = 0; j < i; j++) {
					boolean tf = false;
					if (id[i][1].equals(id[j][1]) && id[j][0].equals("I")) {
						id[j][0] = "D";
						tf = true;
					}

					if (tf)
						break;
				}
			}
		}

		// 오름차순 정렬
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - 1 - i; j++) {
				if (Integer.parseInt(id[j][1]) > Integer.parseInt(id[j + 1][1])) {
					String temp = id[j][0];
					id[j][0] = id[j + 1][0];
					id[j + 1][0] = temp;

					temp = id[j][1];
					id[j][1] = id[j + 1][1];
					id[j + 1][1] = temp;

					temp = id[j][2];
					id[j][2] = id[j + 1][2];
					id[j + 1][2] = temp;
				}
			}
		}

		// I일 때만, 입력받은 위치를 출력
		for (int i = 0; i < 5; i++) {
			int pr = scan.nextInt();
			for (int j = 0; j < num; j++) {
				if (id[j][0].equals("I")) {
					if (pr == count)
						System.out.println(id[j][1] + " " + id[j][2]);
					count++;
				}
			}
			count = 1;
		}
	}
}