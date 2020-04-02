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
			if (arr[i] < num) // 배열값이 찾으려는 숫자보다 작을 때
				count++;
			else
				return ++count;
		}
		
		if(count == arr.length) // 배열값과 다비교했는데 큰값이 없을 때
			return count + 1;
		
		return 0;
	}
}