#include <iostream>
using namespace std;

void pointer_to_pointer();
void p_swap(int* a,int* b);
void print_array(int arr[],int size);


int main()
{
	pointer_to_pointer();

	int a = 10;
	int b = 20;

	cout << a << " " << b << endl;

	int* aptr = &a;
	int* bptr = &b;

	p_swap(aptr,bptr);

	cout << a << " " << b << endl; 
	
	int arr[] = {5,3,6,9};
	print_array(arr,sizeof(arr)/sizeof(arr[0]));

	return 0;
}

void p_swap(int* a,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void pointer_to_pointer()
{
	int a = 10;
	int *p;
	p = &a;
    
    cout<< *p<<endl;

    int **q = &p;
    
    cout << *q << endl;
    cout << **q << endl;

}

void print_array(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<*(arr+i)<<" ";
	}
}