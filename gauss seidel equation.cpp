
#include <iostream>
using namespace std;
int main()
{
	cout << "gauss_seidel equation\n";
	int n = 0;
	float eq[3][4] = { 0 }, x1 = 0, x2 = 0, x3 = 0;
	cout << "if need solution 2 equation please int 1 \n";
	cout << "if need solution 3 equation please int 2 \n";
	cin >> n;
	switch (n)
	{
	case (1):
	{
		cout << "a x1 + b x2 = c\n";
		for (int i = 0; i < 2; i++)
		{
			cout << "please inter a b c for the equation" << i + 1 << "\n";
			for (int j = 0; j < 3; j++)
				cin >> eq[i][j];
		}
		for (int i = 0; i < 20; i++)
		{
			x1 = (eq[0][2] - x2 * eq[0][1]) / eq[0][0];
			x2 = (eq[1][2] - x1 * eq[1][0]) / eq[1][1];
			cout << x1 << "\t" << x2 << "\n";

		}
		break;
	}
	case (2):
	{
		cout << "a x1 + b x2 + c x3 = d\n";
		for (int i = 0; i < 3; i++)
		{
			cout << "please inter a b c and d for the equation" << i + 1 << "\n";
			for (int j = 0; j < 4; j++)
				cin >> eq[i][j];
		}
		for (int i = 0; i < 20; i++)
		{
			x1 = (eq[0][3] - x2 * eq[0][1] - x3 * eq[0][2]) / eq[0][0];
			x2 = (eq[1][3] - x1 * eq[1][0] - x3 * eq[1][2]) / eq[1][1];
			x3 = (eq[2][3] - x1 * eq[2][0] - x2 * eq[2][1]) / eq[2][2];
			cout << x1 << "\t" << x2 << "\t" << x3 << "\n";

		}
		break;
	}
	}
}