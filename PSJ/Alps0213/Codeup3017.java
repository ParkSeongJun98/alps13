package Alps0213;

import java.util.Scanner;

public class Codeup3017 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		int[][] result = new int[num][3]; // �迭 ����

		// �迭�� �ε���, ��������, �������� �Է�
		for (int i = 0; i < num; i++) {
			result[i][0] = i + 1;
			result[i][1] = scan.nextInt();
			result[i][2] = scan.nextInt();
		}

		Result res = new Result();
		res.Sort(result); // ����
		res.show(result); // ���
	}
}

class Result {

	public void Sort(int[][] result) {
		for (int i = 0; i < result.length - 1; i++) {
			for (int j = i + 1; j < result.length; j++) {
				if (result[i][1] < result[j][1]) {
					int temp = result[j][0];
					result[j][0] = result[i][0];
					result[i][0] = temp;
					temp = result[j][1];
					result[j][1] = result[i][1];
					result[i][1] = temp;
					temp = result[j][2];
					result[j][2] = result[i][2];
					result[i][2] = temp;
				}

				else if (result[i][1] == result[j][1]) {
					if (result[i][2] < result[j][2]) {
						int temp = result[j][0];
						result[j][0] = result[i][0];
						result[i][0] = temp;
						temp = result[j][1];
						result[j][1] = result[i][1];
						result[i][1] = temp;
						temp = result[j][2];
						result[j][2] = result[i][2];
						result[i][2] = temp;
					}

					else if (result[i][2] == result[j][2]) {
						if (result[i][0] > result[j][0]) {
							int temp = result[j][0];
							result[j][0] = result[i][0];
							result[i][0] = temp;
							temp = result[j][1];
							result[j][1] = result[i][1];
							result[i][1] = temp;
							temp = result[j][2];
							result[j][2] = result[i][2];
							result[i][2] = temp;
						}
					}
				}
			}
		}
	}

	public void show(int result[][]) {
		for (int i = 0; i < result.length; i++) {
			for (int j = 0; j < result[i].length; j++) {
				System.out.print(result[i][j] + " ");
			}
			System.out.println();
		}
	}
}