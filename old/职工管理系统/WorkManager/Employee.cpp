#include "Employee.h"

//构造函数
Employee::Employee(int id, string name, int dId)
{
	this->m_id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDepName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}

//获取职工岗位信息
string Employee::getDepName()
{
	return string("员工");
}