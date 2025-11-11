#include <stdio.h>

void findRoads(int counts[], int n, int target, int result[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (counts[i] + counts[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

int main() {
    int n, target;
    
    printf("Enter number of roads: ");
    scanf("%d", &n);
    
    int counts[n];
    for (int i = 0; i < n; i++) {
        printf("Enter vehicle counts for each road: ");
        scanf("%d", &counts[i]);
    }
    
    printf("Enter target vehicle count: ");
    scanf("%d", &target);
    
    int result[2];
    
    findRoads(counts, n, target, result);
    
    printf("Road %d and Road %d have combined traffic of %d\n", result[0]+1, result[1]+1, target);
    
    return 0;
} 