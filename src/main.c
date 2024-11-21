#include <stdio.h>
#include <stdlib.h>

int main(int Argc, char **Argv)
{
    // 判断传入程序的参数是否为2个，Argv[0]为程序名称，Argv[1]为传入的第一个参数
    if(Argc != 2) {
        // Argv[0]是程序名
        fprintf(stderr, "%s: invalid number of arguments\n", Argv[0]);
        return 1;
    }

    printf(".global main\n");
    printf("main:\n");
    // li为addi别名指令，加载一个立即数到寄存器中
    // 传入程序的参数为str类型，因为需要转换为需要int类型，
    // atoi为“ASCII to integer”
    printf("li a0, %d\n", atoi(Argv[1]));
    printf("ret\n");

    return 0;
}