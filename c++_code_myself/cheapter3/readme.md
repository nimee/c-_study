小结
向量 数据类型

hoemwork.push_back(x);  //添加一个新的元素到向量的末尾。
typedef 定义的名称是特定类型的一个替代名

typedef type name; 把name定义为type的替代名
vector 库中的一种容器类型形式，用来保存一系列类型的值，可以动态的增长
vector<T>::size_type 一种类型，确保能够保存可能存在的最大向量中的所有元素
v.begin() 返回一个数值，数值指示v的第一个元素
v.end()
vector<T> v创建一个空的向量，向量可以保存T类型的元素
v.push_back(e) 向量添加元素
v[i] 返回存储在位置i中的值
v.size() 返回v的元素的个数
其他库工具
sort(b,e) 把在区间[b,e)中定义的元素重新排列成非递减序列； 在<algorithm>中定义
max(e1,e2)
while(cin >> x) 把适当类型的值读到x中并检查流的状态，检查成功，循环体被执行
s.precision(n)  为了后继输出而把流s的精度设置为n
setprecision(n) 返回一个值，如果是对输出流s编写这个函数，那么这个操作具有调用s.precision(n)的效果，定义在<iomanip>中
streamsize      是setprecision期望并且由precision返回的值得类型。
