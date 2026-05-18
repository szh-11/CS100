

// struct Student
// {
//     const char *name;
//     const char *id;
//     int entrance_year;
//     int dorm;
// };

// struct Point3d
// {
//     double x,y,

// }

// #include <stdio.h>
// #include <string.h>

// #define MAX_STUDENTS 100

// typedef struct {
//     int id;
//     char name[50];
//     int age;
//     float score;
// } Student;

// Student students[MAX_STUDENTS];
// int count = 0;

// void addStudent(int id, char *name, int age, float score) {
//     students[count].id = id;
//     strcpy(students[count].name, name);
//     students[count].age = age;
//     students[count].score = score;
//     count++;
// }

// void displayAll() {
//     for(int i = 0; i < count; i++) {
//         printf("ID:%d 姓名:%s 年龄:%d 分数:%.1f\n",
//                students[i].id,
//                students[i].name,
//                students[i].age,
//                students[i].score);
//     }
// }

// int main() {
//     addStudent(1, "张三", 20, 85.5);
//     addStudent(2, "李四", 21, 92.0);
//     addStudent(3, "王五", 19, 78.5);

//     displayAll();

//     return 0;
// }

// struct Student *pStu = malloc(sizeof(struct Student));

// free(pStu);

// char 占 1，下一个 int 要对齐到 4 的倍数 → 偏移 4，中间补 3 字节。

// double 要对齐到 8 的倍数，当前偏移 8（刚用完 4-7 给 int），刚好。

// 结束偏移 16，大小 16（最大成员 8，16 是 8 的倍数）。

struct Student stu = {"Alice", "2024533000", 2024, 8};

// 不建议

struct Student stu = {.name =, .id = }

Compound literals

    struct Student *student_list = malloc(sizeof(struct Student) * n);
for (int i = 0; i != n; ++i)
{
    student_list[i] = (struct)
}
