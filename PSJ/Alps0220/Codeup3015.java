package Alps0220;

import java.util.Scanner;

public class Codeup3015 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int top = scan.nextInt();
		String name[][] = new String[num][2];
		
		for (int i = 0; i < num; i++) {
			name[i][0] = scan.next();
			name[i][1] = scan.next();
		}

		// 버블정렬(내림차순)
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - 1 - i; j++) {
				if (Integer.parseInt(name[j][1]) < Integer.parseInt(name[j + 1][1])) {
					String temp = name[j][0];
					name[j][0] = name[j + 1][0];
					name[j + 1][0] = temp;
					
					temp = name[j][1];
					name[j][1] = name[j + 1][1];
					name[j + 1][1] = temp;
				}
			}
		}

		for (int i = 0; i < top; i++)
			System.out.println(name[i][0]);
	}
}