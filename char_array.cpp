#include <iostream>
using namespace std;


void palindrome_check();
void largest_word();


int main()
{
    return 0;
}


void palindrome_check()
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
}

void largest_word()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n+1];
    
    cin.getline(arr,n);
    cin.ignore();   

    int i=0;
    int current_len = 0,max_len = 0;
    int st = 0,maxst = 0;

    while(1)
    {
        if((arr[i] == ' ') || (arr[i] == '\0'))
        {
            if(current_len>max_len)
            {
                max_len = current_len;
                maxst = st;             
            }
            current_len = 0;
            st = i+1;            
        }
        else
        {
            current_len++;            
        }
        if(arr[i] == '\0')  
        {
            break;
        }
        i++;
    }

    cout << max_len << endl;
    for(int i =0;i<max_len;i++)
    {
        cout << arr[i+maxst];
    }

}