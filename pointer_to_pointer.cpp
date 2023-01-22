#include <iostream>
using namespace std;

void pointer_to_pointer();
int main()
{
	pointer_to_pointer();
	return 0;
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