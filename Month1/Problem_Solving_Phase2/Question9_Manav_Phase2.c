#include <stdio.h>
#include <stdlib.h>


int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    
    qsort(nums, numsSize, sizeof(int), cmp);

    int i,j,left,right;
    int maxQuadruplets = 10000; 
    int** result = (int**)malloc(sizeof(int*) * maxQuadruplets);
    *returnColumnSizes = (int*)malloc(sizeof(int) * maxQuadruplets);
    *returnSize = 0;

    for (i = 0; i < numsSize - 3; i++) {
        
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (j = i + 1; j < numsSize - 2; j++) {
            
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            
            left = j + 1, right = numsSize - 1;
            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    result[*returnSize] = (int*)malloc(4 * sizeof(int));
                    result[*returnSize][0] = nums[i];
                    result[*returnSize][1] = nums[j];
                    result[*returnSize][2] = nums[left];
                    result[*returnSize][3] = nums[right];
                    (*returnColumnSizes)[*returnSize] = 4;
                    (*returnSize)++;

                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }

    return result;
}

int main() {
    int nums[] = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize = 0;
    int* returnColumnSizes = NULL;
	int i,j;
    int** ans;
	ans = fourSum(nums, numsSize, target, &returnSize, &returnColumnSizes);

    printf("The quadruplets from above array : \n");
    for (i = 0; i < returnSize; i++) {
        printf("[");
        for (j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d", ans[i][j]);
            if (j < returnColumnSizes[i] - 1) printf(" ");
        }
        printf("]\n");
    }

    
    for (i = 0; i < returnSize; i++) {
        free(ans[i]);
    }
    free(ans);
    free(returnColumnSizes);

    return 0;
}

