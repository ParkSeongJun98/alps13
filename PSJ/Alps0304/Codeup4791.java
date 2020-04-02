package Alps0304;

import java.util.Arrays;
import java.util.Scanner;

public class Codeup4791 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		long result = 0;
		int count = 0;

		int m = scan.nextInt();
		int n = scan.nextInt();
		long l = scan.nextInt();

		long[] gun = new long[m];
		long[][] animal = new long[n][2];
		int[] index = new int[n];

		for (int i = 0; i < gun.length; i++)
			gun[i] = scan.nextLong();

		Arrays.sort(gun);

		for (int i = 0; i < animal.length; i++) {
			animal[i][0] = scan.nextLong();
			animal[i][1] = scan.nextLong();
		}

		for (int i = 0; i < gun.length; i++) {
			for (int j = 0; j < animal.length; j++) {
				if (index[j] == 0 && animal[j][0] > gun[i]) {
					result = animal[j][0] + animal[j][1] - gun[i];
					if (result <= l) {
						index[j] = 1;
						count++;
					}
				}

				else if (index[j] == 0 && animal[j][0] <= gun[i]) {
					result = animal[j][1] - animal[j][0] + gun[i];
					if (result <= l) {
						index[j] = 1;
						count++;
					}
				}
			}
		}
		
		System.out.println(count);
	}
}