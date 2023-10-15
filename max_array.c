#include <stdio.h>

int maxSubArray(int nums[], int size) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < size; ++i) {
        currentSum = (currentSum > 0) ? currentSum + nums[i] : nums[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int maxSum = maxSubArray(nums, size);
    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}
