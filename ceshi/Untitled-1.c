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

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                showAllStudents();
                break;
            case 3:
                findTopStudent();
                break;
            case 0:
                printf("感谢使用，再见！\n");
                return 0;
            default:
                printf("无效的选择，请重试。\n");
        }
    }
    return 0;
}

// 功能1：添加学生
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("系统已满，无法添加更多学生！\n");
        return;
    }

    struct Student s;
    printf("请输入学号 (整数): ");
    scanf("%d", &s.id);
    
    printf("请输入姓名 (不含空格): ");
    scanf("%s", s.name);
    
    printf("请输入成绩 (0-100): ");
    scanf("%f", &s.score);

    // 将新学生加入数组
    students[studentCount] = s;
    studentCount++;

    printf(">>> 成功添加学生: %s\n", s.name);
}

// 功能2：显示所有学生
void showAllStudents() {
    if (studentCount == 0) {
        printf(">>> 暂无学生数据，请先录入。\n");
        return;
    }

    printf("\n%-10s %-15s %-10s\n", "学号", "姓名", "成绩");
    printf("--------------------------------------\n");
    
    for (int i = 0; i < studentCount; i++) {
        printf("%-10d %-15s %-10.1f\n", 
               students[i].id, 
               students[i].name, 
               students[i].score);
    }
}

// 功能3：查找最高分
void findTopStudent() {
    if (studentCount == 0) {
        printf(">>> 暂无学生数据。\n");
        return;
    }

    int topIndex = 0;
    for (int i = 1; i < studentCount; i++) {
        if (students[i].score > students[topIndex].score) {
            topIndex = i;
        }
    }

    printf("\n>>> 最高分学生信息:\n");
    printf("学号: %d, 姓名: %s, 成绩: %.1f\n", 
           students[topIndex].id, 
           students[topIndex].name, 
           students[topIndex].score);
}