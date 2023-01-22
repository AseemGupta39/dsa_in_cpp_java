#include <iostream>
using namespace std;

void pointer_to_pointer();
void p_swap(int* a,int* b);

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