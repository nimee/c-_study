//习题 3-2
/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<ios>
#include<iomanip>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::streamsize;
using std::vector;
//using std::precision;
using std::setprecision;
using std::string;

int main()
{
        cout << "输入4 的倍数个数值" << endl;
        vector<double> homework;
        double x;
        while(cin >> x)
                homework.push_back(x);
        
        //检查Homework是否为空
        typedef  vector<double>::size_type vec_sz;
        vec_sz size = homework.size();
        if (size == 0){
                cout << endl << "你必须键入平时成绩"
                        << "再试一次" << endl;
        return 1;
        }
        //对成绩进行排序
        sort(homework.begin(),homework.end(),greater<int>());
        int n = size/4;
        int i,j;
        for(i=0;i!=4;i++)
        {
               for(j=0;j!=n;j++){
                    
               cout << homework[i*n+j] << ' ';
               
               }
               cout << endl;
        }
        vec_sz mid = size/2;
        return 0;               
}
*/
//习题 3-3 Write a program to count how many times each distinct word appears in its input
// https://blog.csdn.net/thinkheart/article/details/59525091
/*
 *#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
	typedef vector<string>::size_type vec_sz;
 
	vector<string> words;
	vector<int> counts;
 
	cout << "Words: ";
	string s;
 
	while (cin >> s) {
		bool found = false;
 
		for (vec_sz i = 0; i < words.size(); ++i) {
			if (s == words[i]) {
				++counts[i];
				found = true;
			}
		}
 
		if (!found) {
			words.push_back(s);
			counts.push_back(1);
		}
	}
 
	for (vec_sz i = 0; i < words.size(); ++i)
		cout << words[i] << " appeared " << counts[i] << " times" << endl;
 
	return 0;
}

 */



#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> words;
    deftype vector(string)::size_type vec_sz;
    vector<int> counts;
    cout << "words";
    string s;

    whiel(cin >> s){
            bool found = false;
            for(vec_sz i=0;i)
    }
    
}
