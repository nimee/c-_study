//回文数
#include<iostream>
using namespace std;
int palindrome(int n)
{
        int i=n;
        int m=0;
        while(i>0)
        {
           m=10*m+i%10;
            i=i/10;
        }
        cout << m;

}
int main()
{
        int n;
        while(cin>>n)
        {
                palindrome(n);
        }
}
