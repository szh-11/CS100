#include <stdio.h>
#include <string.h>

// int main(int argc, char *argv[])
// {
//     // ========== 测试专用：模拟命令行参数 ==========
//     char *test_args[] = {
//         "program_name", // argv[0]（随便写）
//         "-Wall",
//         "-o output.exe",
//         "main.c",
//         "-std=c++20",
//         NULL // 结束标记
//     };

//     argc = 5;         // 参数个数（不包括最后的 NULL）
//     argv = test_args; // 指向测试数组
//                       // }
int main(int argc, char *argv[])
{

    // // ========== 测试模式：模拟命令行参数 ==========
    // char *test_args[] = {
    //     "gcc_descriptor", // argv[0]（程序名，随便写）
    //     "-std=gnu11",
    //     "-Wall",
    //     "-Wpedantic",
    //     "-Wextra",
    //     "a.c",
    //     "b.hxx",
    //     "c.cpp",
    //     "-Werror",
    //     "-o",
    //     "output_file",
    //     "-I",
    //     "/usr/include",
    //     NULL // 结束标记
    // };
    // argc = 13; // 参数个数（从 argv[1] 到最后一个，不包括 NULL）
    // argv = test_args;

    for (int i = 1; i < argc; i++)
    {
        // argv[i]

        if (strcmp(argv[i], "-Wall") == 0)
        {
            printf("-Wall: Enable all the warnings about constructions that some users consider questionable, and that are easy to avoid (or modify to prevent the warning).\n");
        }

        if (strcmp(argv[i], "-Wpedantic") == 0)
        {
            printf("-Wpedantic: Issue all the warnings demanded by strict ISO C and ISO C++ and reject all programs that use forbidden extensions.\n");
        }

        if (strcmp(argv[i], "-Wextra") == 0)
        {
            printf("-Wextra: Enable some extra warning flags that are not enabled by -Wall.\n");
        }
        if (strcmp(argv[i], "-Werror") == 0)
        {
            printf("-Werror: Make all warnings into errors.\n");
        }
        if (strncmp(argv[i], "-o", 2) == 0)
        {
            // const char *value = argv[i] + 3;
            printf("-o %s: Place the primary output in file %s.\n", argv[i + 1], argv[i + 1]);
        }
        if (strncmp(argv[i], "-I", 2) == 0)
        {
            // const char *value = argv[i] + 3;
            printf("-I %s: Add the directory %s to the list of directories to be searched for header files during preprocessing.\n", argv[i + 1], argv[i + 1]);
        }
        if (strncmp(argv[i], "-std=", 5) == 0)
        {
            int flag = 0;
            const char *value = argv[i] + 5;
            if (strncmp(value, "c++", 3) == 0 && flag == 0)
            {
                const char *inside = value + 3;
                flag = 1;
                printf("%s: Set the language standard to ISO C++%s.\n", argv[i], inside);
            }
            else if (strncmp(value, "c", 1) == 0 && flag == 0)
            {
                const char *inside = value + 1;
                flag = 1;
                printf("%s: Set the language standard to ISO C%s.\n", argv[i], inside);
            }
            else if (strncmp(value, "gnu++", 5) == 0 && flag == 0)
            {
                const char *inside = value + 5;
                flag = 1;
                printf("%s: Set the language standard to GNU dialect of C++%s.\n", argv[i], inside);
            }
            else if (strncmp(value, "gnu", 3) == 0 && flag == 0)
            {
                const char *inside = value + 3;
                flag = 1;
                printf("%s: Set the language standard to GNU dialect of C%s.\n", argv[i], inside);
            }
        }

        // int card_1 = 0;
        // int card = 0;
        char *dot = strrchr(argv[i], '.');
        if (dot != NULL && (strcmp(dot, ".cpp") == 0 || strcmp(dot, ".cc") == 0 || strcmp(dot, ".cxx") == 0 || strcmp(dot, ".C") == 0))
        {
            printf("%s: C++ source code as input file.\n", argv[i]);
            // card_1 = 1;
        }

        else if (dot != NULL && strcmp(dot, ".c") == 0)
        {
            printf("%s: C source code as input file.\n", argv[i]);
            // card_1 = 1;
        }
        // int card = 0;

        else if (dot != NULL && (strcmp(dot, ".hpp") == 0 || strcmp(dot, ".hxx") == 0))
        {
            printf("%s: C++ header file as input file.\n", argv[i]);
            // card = 1;
        }
        else if (dot != NULL && strcmp(dot, ".h") == 0)
        {
            printf("%s: C/C++ header file as input file.\n", argv[i]);
            // card = 1;
        }
    }
}