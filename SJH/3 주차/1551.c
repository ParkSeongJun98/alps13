#include <stdio.h>

int n, d[100010], k;

int f(int k) {
	int num=-1;
	for (int i = 1; i <= n; i++) {
		if (k == d[i]) {
			num = i;
			break;
		}
	}
	return num;
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &d[i]);

	scanf("%d", &k);
	printf("%d\n", f(k));
}
