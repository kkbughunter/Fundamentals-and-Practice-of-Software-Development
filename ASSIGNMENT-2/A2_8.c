//8) Implement the solution for (1) without a condition?!

include <stdio.h>

int main() {
    int n;
    char* arr[2]={"Even","Odd"};
    scanf("%d",&n);
    printf("The number is %s",arr[n%2]);
    return 0;
}
