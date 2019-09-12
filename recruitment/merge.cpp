#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*class Merge{
        public:
        void merge(vector<int> & num1,int m,vector<int> & num2,int n)
        {
           int i;
            
           i=m+n-1;
           m--;
           n--;
           while(m!=-1&& n!= -1)
                {
                        if(num1[m]>num2[n])
                                num1[i--]=num1[m--];
                        else
                                num1[i--]=num2[n--];
                }
           while(n!=-1)
                   num1[i--]=num2[n--];
          // return   num1;
        }
};*/
/*void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result; 
        int p=m-1,q=n-1,cur=m+n-1;
        while(p>=0 || q>=0)
        {
                while(p<0)
                        nums1[cur--]=nums2[q--];
                while(q<0)
                        nums1[cur--]=nums1[p--];
                if(nums1[p]>nums2[q])
                        nums1[cur--]=nums1[p--];
                else    
                        nums1[cur--]=nums2[q--];
        }
        //return result;
    }*/
int main()
{
        vector<int> obj1;
        vector<int> obj2;
        for(int i=0;i<4;i++)
        {
                obj1.push_back(i);
                cout<< obj1[i]<<",";
        }
        
                cout<< endl;
        for(int j=0;j<4;j++){
                obj2.push_back(j);
                cout << obj2[j]<<",";
        }
                cout <<endl;
       int s1=obj1.size();
       int s2=obj2.size();
       int  s=s1+s2-1;
      // cout << "s1"<< s1<<"s2"<<s2<< "s"<<s<<endl;
       s1--;
       s2--;
       cout << "s1"<< s1<<"s2"<<s2<< "s"<<s<<endl;
        cout << s << endl;
        cout << "aaaaaa"<< endl;
        if(s1>=0)
        {
                if(s2>=0)
                {  
                    if(obj1[s1]>obj2[s2])
                        {

                            obj1[s--]=obj1[s1--];
                        }
                    else 
                        {

                            obj1[s--]=obj2[s2--];
                        }
                }

        }
        else if(s2>=0)
        {

                obj1[s--]=obj2[s2--];
        }
        for(int k=0;k!=s;k++)
        {
            cout << obj1[k]<< endl;
        }
        cout<< "bbbbbbbbbb"<< endl;
}
