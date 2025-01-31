#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int i, left, right, currSum;
    int closestSum = nums[0] + nums[1] + nums[2];

    for (i = 0; i < numsSize - 2; i++) {
        left = i + 1, right = numsSize - 1;
        while (left < right) {
            currSum = nums[i] + nums[left] + nums[right];
            if (abs(target - currSum) < abs(target - closestSum)) {
                closestSum = currSum;
            }
            if (currSum < target) {
                left++;
            } else if (currSum > target) {
                right--;
            } else {
                return target;
            }
        }
    }
    return closestSum;
}

int main() {
    int nums1[] = {-1, 2, 1, -4};
    int target1 = 1;
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Closest sum to %d: %d\n", target1, threeSumClosest(nums1, size1, target1));

    int nums2[] = {0, 0, 0};
    int target2 = 1;
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Closest sum to %d: %d\n", target2, threeSumClosest(nums2, size2, target2));

    return 0;
}

