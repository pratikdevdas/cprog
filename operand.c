#include <stdio.h>

int main() {
    int x=10, y=20;
    x+=++y+y++;
    printf("%d",x);
    return 0;
}