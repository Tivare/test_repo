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
	int a, b;
	cout << "Enter two numbers->";
	cin >> a >> b;
	int res = Sum(a,b);
	cout << "Res = " << res << endl;
	cout<<"New try"<<endl;
}