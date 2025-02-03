int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

int singleNumber(int* nums, int numsSize) 
{
    qsort(nums, numsSize, sizeof(int), compare);
    int temp = nums[0];
    int licz=1;
    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i]==temp)
        {
            licz++;
        }
        else if(licz > 1 && nums[i] != temp)
        {
            licz = 1;
            temp = nums[i];
        }
        else 
        {
            return temp;
        }
    }
    return temp;

}
