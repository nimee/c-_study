#include<iostream>
using namespace std;
int binarySearch(int a[],int,int,int);
int main()
{
int array[]={1,2,3,4,5,6,7,8,9,10};
int m=6;
int n =binarySearch(array,0,9,m);
cout << n <<endl;
}
int binarySearch(int s[],int i,int j,int m) 
{
    if(i<=j)
    {
            int mid;
            mid=i+(j-i)/2;
            if(s[mid] == m)
            return mid;
             
           else if(s[mid]>m)
             return  binarySearch(s,i,mid-1,m);
            else if(s[mid]<m)
             return     binarySearch(s,mid+1,j,m);
    }
}
