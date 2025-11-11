#include <stdio.h>

void updateValue(int a) {
    a = 85;
}

void updateReference(int *a) {
    *a = 85;
}

int main() {
    int num = 80;
    updateValue(num);
    printf("Before Update Value: %d\n", num);
    printf("After Update Value: %d (No Change)\n", num);
    printf("Before Update Reference: %d\n", num);
    updateReference(&num);
    printf("After Update Reference: %d (Update Successful)", num);
    return 0;
}