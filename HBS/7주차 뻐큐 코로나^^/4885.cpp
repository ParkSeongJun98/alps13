#include <iostream>
using namespace std;

typedef struct beaker
{
	int capacity;	//비커의 용량
	int present;	//비커의 현재 물양
}beaker;
beaker fill(beaker thing)	//비커 채우기
{
	thing.present = thing.capacity;
	return thing;
}
beaker empty(beaker thing)	//비커 비우기
{
	thing.present = 0;
	return thing;
}

beaker movetoa(beaker thing1, beaker thing2)	//비커 thing1에서 thing2로 물 옮기기	반환값은 준쪽
{
	if (thing1.present > thing2.capacity - thing2.present)
	{
		thing1.present -= thing2.capacity - thing2.present;
		thing2.present = thing2.capacity;
		return thing1;
	}
	else
	{
		thing2.present += thing1.present;
		thing1.present = 0;
		return thing1;
	}
}
beaker movetob(beaker thing1, beaker thing2)	//비커 thing1에서 thing2로 물 옮기기	반환값은 받은쪽
{
	if (thing1.present > thing2.capacity - thing2.present)
	{
		thing1.present -= thing2.capacity - thing2.present;
		thing2.present = thing2.capacity;
		return thing2;
	}
	else
	{
		thing2.present += thing1.present;
		thing1.present = 0;
		return thing2;
	}
}
beaker a, b;
int c, d;
int co = 11;
void find(int now, beaker x, beaker y)	//횟수 찾아주는 재귀 함수
{
	if (now > 10)
	{
		return;
	}
	if (x.present == c && y.present == d)
	{
		if (co > now)co = now;
	}
	if (x.present == 0)	//x비커의 현재 물양 == 0
	{
		if (y.present == 0)
		{
			find(now + 1, fill(x), y);
			find(now + 1, x, fill(y));
		}
		else if (y.present > 0 && y.present <= y.capacity)
		{
			find(now + 1, fill(x), y);
			find(now + 1, movetob(y, x), movetoa(y, x));
		}
	}
	else if (x.present > 0 && x.present < x.capacity)	// 0 <x비커의 현재 물양 <x비커의 용량
	{
		if (y.present == 0)
		{
			find(now + 1, x, fill(y));
			find(now + 1, movetoa(x, y), movetob(x, y));
		}
		else if (y.present == y.capacity)
		{
			find(now + 1, movetob(y, x), movetoa(y, x));
			find(now + 1, x, empty(y));
		}
	}
	else if (x.present == x.capacity)	//x비커의 현재 물양 ==x비커의 용량
	{
		if (y.present == 0)
		{
			find(now + 1, movetoa(x, y), movetob(x, y));
			find(now + 1, x, fill(y));

		}
		else if (y.present > 0 && y.present < y.capacity)
		{
			find(now + 1, movetoa(x, y), movetob(x, y));
			find(now + 1, empty(x), y);
		}
	}
}

int main(void)
{
	cin >> a.capacity >> b.capacity >> c >> d;
	a.present = 0;
	b.present = 0;
	find(0, a, b);
	if (co == 11)cout << "-1";
	else cout << co;

	return 0;
}