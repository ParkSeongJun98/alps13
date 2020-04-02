#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool isit = true;
	if (a > b&& c > d)
	{
		if (a > c)
		{
			if (a > c&& c > b&& b > d)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
		if (c > a)
		{
			if (c > a&& a > d&& d > b)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
	}
	if (a > b&& d > c)
	{
		if (a > d)
		{
			if (a > d&& d > b&& b > c)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
		if (d > a)
		{
			if (d > a&& a > c&& c > b)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
	}
	if (b > a&& c > d)
	{
		if (b > c)
		{
			if (b > c&& c > a&& a > d)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
		if (c > b)
		{
			if (c > b&& b > d&& d > a)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
	}
	if (b > a&& d > c)
	{
		if (b > d)
		{
			if (b > d&& d > a&& a > c)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
		if (d > b)
		{
			if (d > b&& b > c&& c > a)
			{
				cout << "cross";
				isit = false;
			}
			else cout << "not cross";
		}
	}
}