package Alps0220;

import java.util.Scanner;

public class Codeup3702 {

	static int tri[][] = new int[51][51];

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		int row = scan.nextInt();
		int col = scan.nextInt();

		System.out.println(pascal(row, col));
	}

	public static int pascal(int row, int col) {

		// ù��° ��� ���� ��� 1
		if (row == 1 || col == 1)
			return tri[row][col] = tri[col][row] = 1;

		// ���� ������ 
		if (tri[row][col] != 0)
			return tri[row][col];
		else // ���� ������
			return tri[row][col] = tri[col][row] = (pascal(row - 1, col) + pascal(row, col - 1)) % 100000000;
	}
}