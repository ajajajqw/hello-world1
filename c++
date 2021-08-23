#include <iostream>
using namespace std;    //使用命名空间

int add(int a, int b);

int main()
{
	int x, y;
	cout << "Enter two number:" << endl;
	cin >> x;
	cin >> y;
	int sum = add(x, y);
	cout << "This sum is:" << sum << '\n';
	return 0;
}
int add(int a, int b) {
	return a + b;
