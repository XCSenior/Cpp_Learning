/* 定义一个欢迎函数 */
#include <iostream>
using namespace std;

void welcome()
{
	// 提示用户输入姓名
	cout << "请输入您的大名：" << endl;
	// 等待键盘输入，用一个变量来保存键盘输入的信息
	string name;
	cin >> name;
	// 输出欢迎信息
	cout << "Hello，" << name << endl;
}