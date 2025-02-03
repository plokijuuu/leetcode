int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int temp = nums[0];
    for(int i = 1; i < numsSize; i++)
    {
        if(temp == nums[i])
        {
            return true;
        }
        else
        {
            temp = nums[i];
        }
    }
    return false;
}
