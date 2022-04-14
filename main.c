#include <stdio.h>


int add(int x, int y) {
    return x + y;
}

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    printf("%d", add(1, 2));
    return 0;
}
