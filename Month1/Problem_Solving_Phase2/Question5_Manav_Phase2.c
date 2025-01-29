#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int cmp(const void* a, const void* b){
	return *(int *)a - *(int*)b;
}
bool containsDuplicate(int *nums, int numsSize){
	if(numsSize <= 1)return false;
	qsort(nums, numsSize, sizeof(int), cmp);
	int i;
	for(i = 0; i < numsSize; i++){
		if(nums[i] == nums[i+1]){
			return true;
		}
	}
	return false;
}
int main(){
	int nums[] = {1,2,3,4,5,6,7,8,9,1};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	if(containsDuplicate(nums,numsSize)){
		printf("Have Duplicate Elements\n");
	}else{
		printf("Don't have Duplicate Elements\n'");
	}
	return 0;
}
