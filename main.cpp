#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;

	cout << endl << "Please input your first name" << endl;
	cin >> name;

	cout << endl << endl;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << " " << name << endl;
	}
}