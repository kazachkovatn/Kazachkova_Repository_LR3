#include <iostream>
#include <string>
using namespace std;


int IntSumm(float x, float y, float z)
{
    
}

float FractionalPart(float x, float y, float z)
{

}

struct MenuItem
{
	string title;
	function<void()> action;
};


int main()
{
	map<int, MenuItem> menu = {
		{1, {"Integer part of the sum", IntSumm}},
		{2, {"fractional part of the geometric mean", FractionalPart}},
	};
	int choice = 0;
	cout << "Menu: " << endl;
	for (const auto& item : menu)
	{
		cout << "Task " << item.first << ". " << item.second.title << endl;
	}
	cout << "0. Exit" << endl;
	while (true)
	{
		EnterNumber(choice, "Enter number of point: ")();
		if (choice == 0)
		{
			cout << "2025 Taya Kazachkova " << endl;
			break;
		}
		cout << endl << "===========Action:============" << endl;

		if (menu.find(choice) != menu.end())
			menu[choice].action();
		else
			cout << "Uncorrect enter";
		cout << endl;
	}
	return 0;
}
