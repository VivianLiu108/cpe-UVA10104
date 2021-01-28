#include<iostream>
using namespace std;

int main()
{
	int A, B;
	int A1, B1;
	int A2, B2;
	while(cin >> A >> B)
	{
		A1 = A;
		B1 = B;
		while (A1 != 0 && B1 != 0)
		{
			if (A1 > B1)
				A1 %= B1;
			else
				B1 %= A1;
		}
		int i = 1;
		A2 = A / (A1 + B1);
		B2 = B / (A1 + B1);
		while (A2 != B2 && (A2*i - 1) % B2 != 0 && (B2*i - 1) % A2 != 0 && (B2*i + 1) % A2 != 0 && (A2*i + 1) % B2 != 0)
		{
			i++;
			if ((A2*i - 1) % B2 == 0)
			{
				cout << i << ' ' << '-' << (A2*i - 1) / B2 << ' ';
			}
			else if((B2*i - 1) % A2 == 0)
			{
				cout << '-' << (B2*i - 1) / A2 << ' ' << i << ' ';
			}
			else if ((B2*i + 1) % A2 == 0)
			{
				cout << (B2*i + 1) / A2 << ' ' << '-' << i << ' ';
			}
			else if ((A2*i + 1) % B2 == 0)
			{
				cout << '-' << i << ' ' << (A2*i + 1) / B2 << ' ';
			}
		}
		if (A2 == B2)
			cout << "0 1 ";
		else if ((A2 - 1) % B2 == 0)
		{
			cout << i << ' ' << '-' << (A2 - 1) / B2 << ' ';
		}
		else if ((B2 - 1) % A2 == 0)
		{
			cout << '-' << (B2 - 1) / A2 << ' ' << i << ' ';
		}
		else if ((B2 + 1) % A2 == 0)
		{
			cout << (B2 + 1) / A2 << ' ' << '-' << i << ' ';
		}
		else if ((A2 + 1) % B2 == 0)
		{
			cout << '-' << i << ' ' << (A2 + 1) / B2 << ' ';
		}
		cout << A1+B1 << endl;
	}
}