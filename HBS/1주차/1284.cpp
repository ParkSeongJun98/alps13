#include <iostream>
using namespace std;

int main(void)
{
	int factor[100];									//�Ҽ��� �μ��� ���� �迭
	int factor_i = 0;									//�Ҽ��迭�� ������ ������
	int small, big;									//�����Ҽ� ū�Ҽ�
	int n;											//�Է¹��� ����
	int div;								//�μ�
	bool is_true = false;							//�μ����� ���� n�̵Ǵ���
	bool isfactor = true;							//�μ��� �Ҽ�����

	cout << "n�Է�: ";
	cin >> n;

	for (div = 2; div < n; div++)						//factor�� �μ����� �Ҽ��� �ִ´�
	{
		for (int i = 2; i < div; i++)
		{
			if (div % i == 0)isfactor = false;
		}

		if (n % div == 0 && isfactor == true)
		{
			factor[factor_i] = div;
			factor_i++;
		}
		isfactor = true;
	}


	for (int i = 0; i < factor_i; i++)				// �μ����� �Ҽ��� �� �߿� ����
	{												// n�̵Ǵ���
		for (int s = i; s < factor_i; s++)
		{
			if (factor[i] * factor[s] == n)
			{
				is_true = true;
				if (factor[i] > factor[s])
				{
					small = factor[s];
					big = factor[i];
				}
				else
				{
					small = factor[i];
					big = factor[s];
				}
			}
		}
	}
	if (is_true == true)cout << small << "  " << big << endl;
	else cout << "no" << endl;
}