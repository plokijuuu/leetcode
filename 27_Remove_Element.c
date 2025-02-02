int removeElement(int* nums, int numsSize, int val) {
   int licz = 0;
   for(int i = 0; i < numsSize; i++)
   {
        if(nums[i] != val)
        {
            nums[licz] = nums[i];
            licz++;
        }

   } 
   for(int i = licz; i < numsSize; i++)
   {
        nums[i] = 0;
   }
   return licz;
}
