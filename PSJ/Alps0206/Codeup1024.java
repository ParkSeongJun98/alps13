package Alps0206;

import java.util.Scanner;

public class Codeup1024 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		String word;

		word = scan.next();

		String[] arr = word.split(""); // �ѱ��ھ� ������ �迭�� ����

		for (int i = 0; i < arr.length; i++)
			System.out.println("'" + arr[i] + "'");
	}
}