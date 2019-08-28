#include<iostream>;
using namespace std;
int main()
{
	int x, y, m, n, r = 1;
	cout << "输入x：";
	cin >> x;
	cout << "输入y：";
	cin >> y;
	if (y < 0)
	{
		cout << "ERROR" << endl;
		system("pause");
	}
	else if (x < 0)
	{
		cout << "ERROR" << endl;
		system("pause");
	}
	else
	{
		m = x;
		n = y;
		for (; r > 0;)
		{
			r = x % y;
			x = y;
			y = r;
		}
		cout << m << "和" << n << "的最大公因数是：" << x << endl;
		system("pause");
		return 0;
	}
}