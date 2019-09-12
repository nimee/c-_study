#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> a;
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        for(int i=0;i!=a.size();i++)
                cout<< a[i]<<",";
        cout<<endl;
        int b=a[10];
        cout << "a[10]:"<< b<<endl;
        int c=a[1];
        a[10]=c;
        a[9]=a[0];
        cout << "a[10]:" <<a[10]<<endl;
        cout << "a[9]:" << a[0]<<endl;
}
