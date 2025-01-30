#include<stdio.h>
int removeDuplicates(int *, int);

int removeDuplicates(int *nums, int numsSize){
	int i,ptr = 1;
	for(i = 0; i < numsSize; i++){
		if(nums[i] != nums[i - 1]){
			nums[ptr] = nums[i];
			ptr++;
		}
	}
	return ptr;
}
int main(){
	int nums[] = {0, 0, 1, 1, 1, 2, 2, 2, 3, 3,4};
	int i;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	
	int newLength = removeDuplicates(nums, numsSize);
	printf("Number of unique elements : %d\n",newLength);
	printf("New Array : ");
	for(i = 0; i < newLength; i++){
		printf("%d ",nums[i]);
	}
	printf("\n");
	
	return 0;
}
