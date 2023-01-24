#include <iostream> 
using namespace std;


int get_bit(int n, int pos);    // prototype //
int set_bit(int n, int pos);    // prototype //
int clear_bit(int n, int pos);  // prototype //
bool is_power_of_2(int n);		// prototype //
int count_1s(int n);			// prototype //
void subsets(int arr[], int n); // prototype //


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


bool is_power_of_2(int n)
{
	return (n && !(n & n-1));
}


int count_1s(int n)
{
	int count = 0;
	while (n!=0)
	{
		n = n & (n-1);
		count++;
	}
	
	return count;
}


void subsets(int arr[],int n)
{
	for(int i = 0; i < (1<<n); i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i & (1<<j))
			{
				cout << arr[j] << " "; 	
			}
		}

		cout << endl;
	}
}


int main()
{   
	int a,b;
	cin >> a >> b;

	int arr[] = {4,3,2,1};

	cout << get_bit(a,b) << endl;
	cout << set_bit(a,b) << endl;
	cout << clear_bit(a,b) << endl;
	cout << get_bit(a,b) << endl;
	cout << is_power_of_2(8) << endl;
	cout << count_1s(8) << endl;
	subsets(arr,4);
	
	
	return 0;
}
