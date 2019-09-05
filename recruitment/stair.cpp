#include<iostream>
using namespace std;
int stair(int);
int main()
{
        int i,j;
        cin >> j;
        i=stair(j);
        cout << i;

}
int stair(int n)
{
        if(n==0)
                return 0;
        else if(n==1)
                return 1;
        else if(n==2)
                return 2;
        else (n>2);
                return stair(n-1)+stair(n-2);
}
