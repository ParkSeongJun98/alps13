#include <iostream>
using namespace std;

int main(void) 
{
	int time=24;
	int minute=60;

	cout << "time < 24 &&minute < 60" << endl;
	while (time >= 24 || minute >= 60)								//time,minute�� ���� ���� ���� �Է½� �ݺ�
	{
		cin >> time;
		cin >> minute;
		if (time >= 24 || minute >= 60) 
		{
			cout << "time < 24 &&minute < 60" << endl;
			cout << "�ٽ��Է�: ";
		}
	}
	if (minute < 30)												//minute�� 30����������� �ð����� �ٲ��.
	{
		if (time == 0)												//time�� 0�ϰ�� 23���� �ٲ��.
		{
			time = 23;
		}
		else 
		{
			time -= 1;
			minute = 60 - (30 - minute);
		}
	}
	else 
	{
		minute -= 30;
	}

	cout << time << " " << minute << endl;
}