// hello.c
#include <stdio.h>

// 修改了一个紧急 bug
void myFunction() {
    printf("This is my new function.\n");
}

// 修改了一个 XX bug
int main() {
    myFunction();
    printf("Hello, World!\n");
    return 0;
}
