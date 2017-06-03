#include "allocator.h"
#include <vector>
#include <iostream>

using namespace std;
int main()
{
	int ia[5]{ 0,1,2,3,4 };
	unsigned int i = 0;
	vector<int, My::allocator<int>> iv(ia, ia + 5);
	for (i = 0; i < iv.size(); i++)
	{
		cout << iv[i];
	}
}
//这是一个简易的空间配置器 仅能支持VC6 与 BCB 暂不支持VS 和 GCC
//所以说这个仅仅只是我用来 学习git的第一次错误的尝试。
