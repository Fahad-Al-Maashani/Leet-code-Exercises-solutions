#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) { 
int* result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize - 1; i++) { 

 // Check if there exists a complement of current number
for ( int j = i+1; j< numsSize; j++) {

     if (nums[i] + nums[j] == target) {
                // Set indices in the result array
                result[0] = i;
                result[1] = j; 
                *returnSize = 2;
                return result;
                }}}
         *returnSize  = 0; 
         free(result); 
         return NULL; 

       }
