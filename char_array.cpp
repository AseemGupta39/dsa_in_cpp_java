#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "enter length of array";
    cin >> n;
    
    char arr[n+1];

    cin >> arr;
    bool check = 1;

    for(int i=0; i<((n/2)+1);i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;    
        }
    }  
    
    if(check == true)
    {
        cout << "word is palindrome" << endl;
    }
 
    else
    {
        cout << "word is not a palindrome" << endl;
    }
    
    return 0;

}