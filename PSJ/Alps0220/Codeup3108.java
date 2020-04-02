package Alps0220;

import java.util.Scanner;

public class Codeup3108 {

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

		// D가 있으면 D의 수험번호와 그 앞까지 수험번호를 검사해서 같으면 D로 바꿈
		for (int i = 0; i < num; i++) {
			if (id[i][0].equals("D")) {
				for (int j = 0; j < i; j++) {
					if (id[i][1].equals(id[j][1]))
						id[j][0] = "D";
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
					if (pr == count) {
						System.out.println(id[j][1] + " " + id[j][2]);
					}
					count++;
				}
			}
			count = 1;
		}
	}
}