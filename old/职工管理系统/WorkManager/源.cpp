#include <iostream>
using namespace std;
#include "Workmanager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"


int main()
{
	//测试代码

	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//worker = new Manager(2, "李四", 3);
	//worker->showInfo();
	//worker = new Boss(3, "王五", 3);
	//worker->showInfo();


	Workmanager wm;
	int choice = 0;
	while (true)
	{
		wm.Show_menu();
		cout << "请输入您的选择" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://添加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://排序职工
			break;
		case 7://清空文档
			break;
		default:
			system("cls");
			break;
		}
	}


	system("pause");
	return 0;
}