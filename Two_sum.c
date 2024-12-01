#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the result array
    int* result = (int*)malloc(2 * sizeof(int));
    if (!result) {
        *returnSize = 0; // No valid result
        return NULL;     // Memory allocation failed
    }

    // Find the two indices that add up to the target
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2; // Set the size of the returned array
                return result;   // Return the dynamically allocated array
            }
        }
    }

    // If no pair is found, clean up and return
    *returnSize = 0;
    free(result);
    return NULL;
}

