#pragma once
#include <iostream>

using namespace std;
#include "Worker.h"

#include <fstream>
#define FILENAME "empFile.txt"


class Workmanager
{
public:
	Workmanager();

	void Show_menu();

	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	~Workmanager();

private:

};
