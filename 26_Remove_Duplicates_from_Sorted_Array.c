int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 1) return 1;
    else
    {
    int prev = nums[0];
    int licz = 0;
    for(int i = 1; i < numsSize; i++)
    {
        if(i != numsSize - 1 && prev != nums[i])
        {
            nums[licz] = prev;
            prev = nums[i];
            licz++;
        }
        else if(i == numsSize - 1 && prev != nums[i])
        {
            nums[licz] = prev;
            licz++;
            nums[licz] = nums[i];
            licz++;
        }
        else if(i == numsSize - 1 )
        {
            nums[licz] = prev;
            licz++;
        }
    }
    for(int i = licz; i < numsSize; i++)
    {
        nums[i] = 0;
    }
    return licz;
    }
}
