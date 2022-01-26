#include<iostream>
using namespace std;

int reverse(int n)
{
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
    }
    return ans;
}

int main()
{   
    int n,a;
    cout<<"Enter digit:"<<endl;
    cin>>n;

    a=reverse(n);
    cout<<"After reversing: "<<a<<endl;
    return 0;
}

/* He solved this problem in leetcode which has an extra constraint that has to deal with INT's RANGE.
  int reverse(int x) {
        
        int ans  = 0;
        while( x != 0) {
            
            int digit = x % 10;
            
  ->>>      if( (ans > INT_MAX/10) || (ans < INT_MIN/10)) {
                return 0;
            }
            
            ans = (ans * 10) + digit;
            x = x / 10;
            
        }
        return ans;
    }
*/
