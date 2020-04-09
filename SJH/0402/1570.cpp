#include <stdio.h>

int n, k, d[1010];
int lower_bound(int k) {

	int low = 1;
	int high = n;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;

		if (d[mid] == k) {
			for (int i = 1; i <= n; i++) {
				if (d[i] == d[mid])
					return i;
			}
		}
		else if (d[mid] > k)
			high = mid - 1;
		else
			low = mid + 1;
	}
	
	
	
	return low;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", lower_bound(k));
}
