#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a, b, c;
	ifstream fin("num.txt");
	if (fin.is_open())
	{
		fin >> a >> b >> c;
		cout << "���������ǣ�" << a << ' ' << b << ' ' << c << endl;
		fin.close();
	}
	else
	{
		cout << "error!" << endl;
	}
	ofstream fout("num.txt");
	if (fout.is_open())
	{
		cout << "input:";
		cin>> a >> b >> c;
		fout << a << ' ' << b << ' ' << c;
		fout.close();
	}
	else
	{
		cout << "д�����" << endl;
	}
	system("pause");
	return 0;

}