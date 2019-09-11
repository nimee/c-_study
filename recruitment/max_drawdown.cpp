#include<iostream>
#include<vector>
using namespace std;
class Max_drawDown{
        public:
                vector<int> drawDown(vector<int>& nums)
                {
                    int diff=0;
                    int i,j;
                    int m,n;
                    vector<int> index;
                    for(i=0;i!=nums.size();i++)
                    {
                            for(j=i+1;j!=nums.size();j++)
                            {
                                    if(nums[i]-nums[j]>diff)
                                    {

                                            diff=nums[i]-nums[j];
                                            m=i;
                                            n=j;

                                   } 
                            }
                    }
                          index.push_back(m);
                          index.push_back(n);
                                        
                     return index;
                }
};
int main()
{
        vector<int> num2;
        int j;
        while(cin>>j)
                num2.push_back(j);
        vector<int> result;
        Max_drawDown max_drawDown;
        result=max_drawDown.drawDown(num2);
        cout << result[0]<< endl;
        cout << result[1]<< endl;
        return 0;

}
