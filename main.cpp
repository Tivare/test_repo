#include<iostream>
using namespace std;
int Sum(int a, int b)
{
	return a+b;
}
int Prod(int a, int b)
{
	return a*b;
}
int main()
{
	cout << "Hello Git" << endl;
	int a, b;
	cout << "Enter two numbers->";
	cin >> a >> b;
	int res = Sum(a,b);
	cout << "Res = " << res << endl;
}