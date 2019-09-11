#include<iostream>  //https://blog.csdn.net/cat1992/article/details/80372617]
#include<tr1/unordered_map>

#include<vector>
using namespace std;
using namespace std::tr1;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> record;
        for(int i = 0 ; i < nums.size() ; i ++){
       
            int complement = target - nums[i];
            if(record.find(complement) != record.end()){
                int res[] = {i, record[complement]};
                return vector<int>(res, res + 2);
            }

            record[nums[i]] = i;
        }
    }
};
int main()
{
vector<int> num2;

        int j;

while(cin>>j)
{
        num2.push_back(j);
}
vector<int> result;
Solution solu;
int tar=9;
result=solu.twoSum(num2,tar);
cout << result[0]<< endl;
cout << result[1]<< endl;
return 0;
}
