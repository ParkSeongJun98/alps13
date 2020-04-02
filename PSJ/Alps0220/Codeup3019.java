package Alps0220;

import java.util.Scanner;

public class Codeup3019 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		String sch[][] = new String[num][4];

		for (int i = 0; i < num; i++) {
			sch[i][0] = scan.next();
			sch[i][1] = scan.next();
			sch[i][2] = scan.next();
			sch[i][3] = scan.next();
		}

		// 버블 정렬(오름차순)
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - 1 - i; j++) {
				if (Integer.parseInt(sch[j][1]) > Integer.parseInt(sch[j + 1][1])) {
					String temp = sch[j][0];
					sch[j][0] = sch[j + 1][0];
					sch[j + 1][0] = temp;

					temp = sch[j][1];
					sch[j][1] = sch[j + 1][1];
					sch[j + 1][1] = temp;

					temp = sch[j][2];
					sch[j][2] = sch[j + 1][2];
					sch[j + 1][2] = temp;

					temp = sch[j][3];
					sch[j][3] = sch[j + 1][3];
					sch[j + 1][3] = temp;
				}

				else if (Integer.parseInt(sch[j][1]) == Integer.parseInt(sch[j + 1][1])) {
					if (Integer.parseInt(sch[j][2]) > Integer.parseInt(sch[j + 1][2])) {
						String temp = sch[j][0];
						sch[j][0] = sch[j + 1][0];
						sch[j + 1][0] = temp;

						temp = sch[j][1];
						sch[j][1] = sch[j + 1][1];
						sch[j + 1][1] = temp;

						temp = sch[j][2];
						sch[j][2] = sch[j + 1][2];
						sch[j + 1][2] = temp;

						temp = sch[j][3];
						sch[j][3] = sch[j + 1][3];
						sch[j + 1][3] = temp;
					}

					else if (Integer.parseInt(sch[j][2]) == Integer.parseInt(sch[j + 1][2])) {
						if (Integer.parseInt(sch[j][3]) > Integer.parseInt(sch[j + 1][3])) {
							String temp = sch[j][0];
							sch[j][0] = sch[j + 1][0];
							sch[j + 1][0] = temp;

							temp = sch[j][1];
							sch[j][1] = sch[j + 1][1];
							sch[j + 1][1] = temp;

							temp = sch[j][2];
							sch[j][2] = sch[j + 1][2];
							sch[j + 1][2] = temp;

							temp = sch[j][3];
							sch[j][3] = sch[j + 1][3];
							sch[j + 1][3] = temp;
						}

						else if (Integer.parseInt(sch[j][3]) == Integer.parseInt(sch[j + 1][3])) {
							if (sch[j][0].compareTo(sch[j + 1][0]) > 0) {
								String temp = sch[j][0];
								sch[j][0] = sch[j + 1][0];
								sch[j + 1][0] = temp;

								temp = sch[j][1];
								sch[j][1] = sch[j + 1][1];
								sch[j + 1][1] = temp;

								temp = sch[j][2];
								sch[j][2] = sch[j + 1][2];
								sch[j + 1][2] = temp;

								temp = sch[j][3];
								sch[j][3] = sch[j + 1][3];
								sch[j + 1][3] = temp;
							}
						}
					}
				}
			}
		}
		
		for(int i=0; i<num; i++)
			System.out.println(sch[i][0]);
	}
}