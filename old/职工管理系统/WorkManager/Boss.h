#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

class Boss :public Worker
{
public:

	//构造函数
	Boss(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取职工岗位信息
	virtual string getDepName();



};