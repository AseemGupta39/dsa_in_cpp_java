#include <iostream> 
using namespace std;

int get_bit(int n, int pos);    // prototype //
int set_bit(int n, int pos);    // prototype //
int clear_bit(int n, int pos);  // prototype //

int get_bit(int n, int pos)
{
	return (((1<<pos)&n)!=0);
}

int set_bit(int n, int pos)
{
	return ((1<<pos)|n);
}

int clear_bit(int n, int pos)
{
	return  ( (~(1<<pos)) & n); 
}


int main()
{   
	int a,b;
	cin >> a >> b;

	cout << get_bit(a,b) << endl;
	cout << set_bit(a,b) << endl;
	cout << clear_bit(a,b) << endl;
	cout << get_bit(a,b) << endl;

	return 0;
}
