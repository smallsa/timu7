/*写一个函数能够打印输出学生结构数组STU stu[10]的信息到屏幕上，测试之*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
struct student
{
	char name[30];
	int id;
	float grade;
}stu[SIZE];
void print();
int main()
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%s", &stu[i].name,30);
		scanf_s("%d", &stu[i].id);
		scanf_s("%f", &stu[i].grade);
	}
	print();
	return 0;
}
void print()
{
	int j;
	for (j = 0; j < SIZE; j++)
	{
		printf("name:%s\n", stu[j].name);
		printf("id:%d\n", stu[j].id);
		printf("grade:%5.2f\n", stu[j].grade);
	}
}