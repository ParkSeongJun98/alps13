package Alps0220;

import java.util.Scanner;

public class Codeup1570 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		int num = scan.nextInt();
		long arr[] = new long[num];
		
		for(int i=0; i<num; i++)
			arr[i] = scan.nextLong();
		
		long find = scan.nextLong();

		System.out.println(LowerBound(arr, find));
	}

	public static int LowerBound(long arr[], long num) {

		int count = 0;
		
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < num) // �迭���� ã������ ���ں��� ���� ��
				count++;
			else
				return ++count;
		}
		
		if(count == arr.length) // �迭���� �ٺ��ߴµ� ū���� ���� ��
			return count + 1;
		
		return 0;
	}
}