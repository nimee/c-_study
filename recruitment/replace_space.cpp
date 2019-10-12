#include<iostream>//空格替换为20%
#include<cstring>    
using namespace std;
int main()
{
        char a[10];
        char b[20];
        string c; 
        int d=0;
       // cin.getline(a,10);
        getline(cin,c);
        cout <<"c的值"<<c<<"中间有空格么"<<endl;
        for(int i=0;i!=c.length();++i)
        {
            //cout<< c[i]<<" "<< endl;
            //cout << sizeof(c)/sizeof(c[0]);
            cout << c[i]<<""<<endl;
            cout<< "长度"<<c.length()<<""<<c.size()<<endl;
            if(c[i]==' ')
                    ++d;

        }
        cout <<"空格个数"<<d<<endl;
        char e[c.length()+d*2];

        
       for(int i=0,j=0;i !=c.length();i++)
       {
               if(c[i]==' ')
               {
                       e[j++]='2';
                       e[j++]='0';
                       e[j++]='%';
               }
               else
               {
                       e[j++]=c[i];

               }
       }
       cout << "替换空格后："<<endl;
       for(int k=0;k!=sizeof(e);k++)
       {
                cout<<e[k]<<" ";
       }
       cout << sizeof(e) <<endl;
}
