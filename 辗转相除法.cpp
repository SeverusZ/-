#include<iostream>;
using namespace std;
int main()
{
	int x, y, m, n, r = 1;
	cout << "����x��";
	cin >> x;
	cout << "����y��";
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
		cout << m << "��" << n << "����������ǣ�" << x << endl;
		cout<<" "<<endl;
		cout << "ϣ�����μ�������а��� :-)" << endl;
		system("pause");
		return 0;
	}
}