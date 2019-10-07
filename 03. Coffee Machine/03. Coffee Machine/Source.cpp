#include<iostream>
#include<string>

using namespace std;

int main()
{
	string typeDrink, sugar;
	int num;
	cin >> typeDrink >> sugar >> num;
	double sum = 0;
	if (typeDrink == "Espresso")
	{
		if (sugar == "Without")
		{
			sum = (0.90 * num) - ((0.90 * num) * 0.35);
		}
		if (num > 5)
		{
			sum  -= sum * 0.25;
		}
	}
	else if (typeDrink == "Cappuccino")
	{
		if (sugar == "Normal")
		{
			sum = (1.20 * num);
		}
	}
	else if (typeDrink == "Tea")
	{
		if (sugar == "Extra")
		{
			sum = (0.70 * num);
		}
	}
	if (sum > 15)
	{
		sum -= sum * 0.20;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "You bought " << num << " cups of " << typeDrink << " for " << sum << " lv." << endl;
	system("pause");
	return 0;
}