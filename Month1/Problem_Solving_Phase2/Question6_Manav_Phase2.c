#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int total_Sum = numsSize * (numsSize + 1) / 2;
    int arr_Sum = 0;
    int i;
    for(i = 0; i < numsSize; i++){
        arr_Sum += nums[i];
    }
    return total_Sum - arr_Sum;
}

int main() {
    int nums1[] = {3, 0, 1};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Missing Number: %d\n", missingNumber(nums1, numsSize1));  // Output: 2

    int nums2[] = {0, 1};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Missing Number: %d\n", missingNumber(nums2, numsSize2));  // Output: 2

    int nums3[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Missing Number: %d\n", missingNumber(nums3, numsSize3));  // Output: 8

    return 0;
}

