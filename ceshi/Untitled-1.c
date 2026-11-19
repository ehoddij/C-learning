#include <stdio.h>
#include <string.h>

// 定义最大学生数量
#define MAX_STUDENTS 100

// 定义学生结构体
struct Student {
    int id;             // 学号
    char name[50];      // 姓名
    float score;        // 成绩
};

// 全局变量，用来存储学生列表
struct Student students[MAX_STUDENTS];
int studentCount = 0;   // 当前学生总数
// 函数声明
void addStudent();
void showAllStudents();
void findTopStudent();