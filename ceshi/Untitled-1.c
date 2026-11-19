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

int main() {
    int choice;

    // 简单的菜单循环
    while (1) {
        printf("\n========== 学生成绩管理系统 ==========\n");
        printf("1. 录入学生信息\n");
        printf("2. 查看所有学生\n");
        printf("3. 查找最高分\n");
        printf("0. 退出系统\n");
        printf("=====================================\n");
        printf("请输入您的选择 (0-3): ");
        
        // 读取用户输入
        if (scanf("%d", &choice) != 1) {
            // 如果输入的不是数字，清空缓冲区防止死循环
            while(getchar() != '\n'); 
            printf("输入无效，请输入数字！\n");
            continue;
        }